//
//  PageTabController.h
//  EOSClient2
//
//  Created by Chang Sam on 11/4/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PagePanel.h"
#import "TabItemM.h"
#import "LuaObjectProxyCompatible.h"
#import "IPageTabBarController.h"

@class PageTabBarControllerWrapper;

@interface PageTabBarController : UITabBarController <PagePanel, UITabBarControllerDelegate, LuaObjectProxyCompatible, IPageTabBarController>{
    NSURL *pageURL;
    PageSandbox *pageSandbox;
    PageTabBarControllerWrapper *wrapper;
    BOOL created;
    UIViewController<PagePanel> *parent;
}

@property (nonatomic, readonly) NSMutableArray *viewControllerList;
@property (nonatomic, readonly) PageM *model;
@property (nonatomic, readonly) AppContext *context;

- (UIViewController *) buildViewController: (TabItemM *) tm;

- (BOOL) selectByName: (NSString *) name;

- (BOOL) updateName: (NSString *) name badge: (NSObject *) badge;

- (BOOL) updateIndex: (NSUInteger) idx badge: (NSObject *) badge;

- (BOOL) selectByIndex: (NSUInteger) idx;
@end
