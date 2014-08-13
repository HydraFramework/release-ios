//
//  PageController.h
//  EOSClient2
//
//  Created by Chang Sam on 10/20/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PageM.h"
#import "ManifestM.h"
#import "PageSandbox.h"
#import "PagePanel.h"
#import "ViewWidget.h"

@interface PageController : UIViewController <PagePanel, MFMessageComposeViewControllerDelegate, UIGestureRecognizerDelegate>{
    NSURL *pageURL;
    PageSandbox *pageSandbox;
    
    ViewWidget *root;
    
    BOOL firstAppear;
    UIInterfaceOrientation lastOrientation;
    CGRect latestReloadFrame;
    
    UIViewController<PagePanel> *parent;
    
    BOOL created;
    BOOL scriptLoaded;
    
    NSTimeInterval lastOnFronted;
}

@property (nonatomic, strong) PageM *model;

@end
