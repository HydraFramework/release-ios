//
//  EOSAppDelegate.h
//  EOSClient2
//
//  Created by Song on 10/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GlobalSandbox.h"
#import "RootNavViewController.h"
#import "RootViewController.h"
#import "IAppManagementService.h"
#import "ESRegistry.h"
#import "GlobalSandboxDelegate.h"

@class AppParam;
@class ViewWidget;

@interface EOSAppDelegate : UIResponder <UIApplicationDelegate, GlobalSandboxDelegate>{
    GlobalSandbox *globalSandbox;
    RootViewController *rootViewController;
    RootNavViewController *rootNavViewController;
    
    NSMutableArray *modalStack;

    UIView *busyView;
    UIView *busyBodyView;
    UIActivityIndicatorView *indicatorView;
    UIProgressView *progressView;
    UILabel *busyLabel;
    
    NSInteger busyCount;
    
    NSTimeInterval lastChangeViewStack;
}

#define PROTECT_VIEW_STACK(blk)    \
if ([NSDate timeIntervalSinceReferenceDate] - lastChangeViewStack < 0.5) {    \
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)((0.5 - ([NSDate timeIntervalSinceReferenceDate] - lastChangeViewStack)) * NSEC_PER_SEC)), dispatch_get_main_queue(), blk); \
    return YES;  \
} else {    \
    lastChangeViewStack = [NSDate timeIntervalSinceReferenceDate];  \
}

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, readonly) GlobalSandbox *globalSandbox;
@property (nonatomic, readonly, getter = getRootViewController) UIViewController *rootViewController;
@property (nonatomic, readonly) RootNavViewController *rootNavViewController;
@property (nonatomic, strong) UIView *busyView;
@property (nonatomic, strong) UIProgressView *progressView;

- (BOOL) switchApp: (AppParam *) params;
- (BOOL) switchPage: (AppParam *) params;
- (BOOL) pushApp: (AppParam *) params;
- (BOOL) popPage: (AppParam *) params;
- (BOOL) popApp: (AppParam *) params;

- (void) presentModal: (ViewWidget *) widget;
- (void) dismissModal;

- (void) reloadPage: (AppParam *) params;

- (void) reloadTopSize;

-(NSString *)bootAppId;

- (void) startBusy: (NSString *) ycenter withTitle: (NSString *) title;
- (void) stopBusy;

- (void) initProxy;

@end
