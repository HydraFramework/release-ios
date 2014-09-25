//
//  WebViewWidget.h
//  EOSClient2
//
//  Created by Chang Sam on 10/19/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractUIWidget.h"
#import "IWebViewWidget.h"
#import "WebViewM.h"

@interface WebViewWidget : AbstractUIWidget <UIWebViewDelegate, IWebViewWidget>{
    UIWebView *webview;
    UIView *mainView;
    
    UIView *coverView;
    UILabel *coverLabel;
    
    UIButton *retryButton;
    
    BOOL firstLoad;
    
    int progressCount;
    
    UIActivityIndicatorView *indicatorView;
    UIView *busyView;
    UIImageView *indicatorBackgroundView;
    
    NSMutableDictionary *schemeHandlerMap;
}

@property (nonatomic, readonly) WebViewM *model;
@property (nonatomic, readonly) WebViewM *stableModel;

@property (nonatomic, strong) NSString *firstSrc;
@property (nonatomic, strong) NSString *lastFileParent;
@property (nonatomic, strong) NSString *lastURLParent;
@property (nonatomic, strong) NSURL *lastURL;

- (void) execute: (NSString *) js;
- (void) loadPage: (NSString *) urlString;

- (void) restart;

@end
