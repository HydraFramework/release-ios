//
//  MaryKayOSAppDelegate.m
//  MaryKayOS
//
//  Created by Song on 6/23/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "AppDelegate.h"
#import <EOS/WidgetMap.h>
#import <EOS/ControllerMap.h>
#import <EOS/WidgetBuilder.h>
#import <EOS/PagePanel.h>
#import <EOS/OSUtils.h>
#import <EOS/StorageHelper.h>
#import <EOS/BSWebViewUserAgent.h>
#import <EOS/ESRegistry.h>
#import <EOS/UIApplication+UIApplication_AppDimensions.h>
#import <EOS/DownloadService.h>
#import <CoreText/CoreText.h>

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [UIApplication sharedApplication].statusBarHidden = NO;
    BOOL ret = [super application: application didFinishLaunchingWithOptions: launchOptions];
    
    // add your services here.
    // [[ESRegistry getInstance] registerService: @"MyService" withName: @"myservice"];
    // [WidgetMap bind: @"widgetname" withModelClassName: @"WidgetModel" withWidgetClassName: @"WidgetClassName"];
    // [ControllerMap bind:@"controllername" withClass:@"ControllerClassName"];
    
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.backgroundColor = [UIColor blackColor];
    [self.window makeKeyAndVisible];
    
    // You can add a splash view here as need.
    // -----------------------------------------------------------------------------------------------
    UIView *splashView = [[UIView alloc] initWithFrame: [[UIScreen mainScreen] bounds]];
    splashView.tag = 888;
    
    UIImageView *imageView = nil;
    if ([[UIScreen mainScreen] bounds].size.height == 568) {
        imageView = [[UIImageView alloc] initWithImage: [UIImage imageNamed: @"Default-568h.png"]];
    }else{
        imageView = [[UIImageView alloc] initWithImage: [UIImage imageNamed: @"Default.png"]];
    }
    
    if (floor(NSFoundationVersionNumber) <= NSFoundationVersionNumber_iOS_6_1) {
        CGRect rect = imageView.frame;
        rect.origin.y = -[UIApplication statusBarHeight];
        imageView.frame = rect;
    }
    
    [splashView addSubview: imageView];
    [rootViewController.view addSubview: splashView];
    // -----------------------------------------------------------------------------------------------
    
    self.window.rootViewController = rootViewController;
    
    [self startBusy: nil withTitle: @""];
    
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        [self initProxy];
        
        EOSMap *dinfo = [globalSandbox getMap: @"$deviceInfo"];
        NSString *currentAppVersion = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"];
        [dinfo put:@"app.version" value: currentAppVersion];
        
        NSString *appVersion = (NSString *)[StorageHelper load: @"appVersion" scope: @"$global"];
        if (![currentAppVersion isEqualToString: appVersion]) {
            [StorageHelper save: @"appVersion" value: currentAppVersion scope: @"$global"];
            
            NSString *archive = [[NSBundle mainBundle] pathForResource: @"Archive" ofType: @"zip"];
            if ([[NSFileManager defaultManager] fileExistsAtPath: archive]) {
                [OSUtils unzip: archive to: globalSandbox.libraryRoot];
            }
        }
        
        id<IAppManagementService> appmanagement = (id<IAppManagementService>)[[ESRegistry getInstance] getService: @"appmanagement"];
        [appmanagement scan];
        
        if ([appmanagement getAppSandbox: [self bootAppId]] == nil
            || [appmanagement getAppSandbox: @"framework"] == nil) {
            NSFileManager *fm = [NSFileManager defaultManager];
            NSString *archive = [[NSBundle mainBundle] pathForResource: @"Archive" ofType: @"zip"];
            if ([fm fileExistsAtPath: archive]) {
                [OSUtils unzip: archive to: globalSandbox.libraryRoot];
                [appmanagement scan];
            }
        }
        
        dispatch_async(dispatch_get_main_queue(), ^{
            AppSandbox *appSandbox = [appmanagement getAppSandbox: [self bootAppId]];
            UIViewController<PagePanel> *controller = [WidgetBuilder buildPageId: nil withAppSandbox: appSandbox];
            [rootNavViewController pushViewController: controller animated: NO];
            [self stopBusy];
            [[self.window viewWithTag: 888] removeFromSuperview];
        });
    });
    
    return ret;
    
}


@end
