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

@class AppParam;
@class ViewWidget;

@interface EOSAppDelegate : UIResponder <UIApplicationDelegate>{
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
