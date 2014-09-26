//
//  PageMetroTabViewController.h
//  EOSFramework
//
//  Created by Sam on 8/15/12.
//
//

#import <UIKit/UIKit.h>
#import "IPageTabBarController.h"
#import "LuaObjectProxyCompatible.h"
#import "PagePanel.h"
#import "PageSandbox.h"
#import "PageM.h"
#import "ViewWidget.h"
#import "MetroTabSwitcher.h"

@interface PageMetroTabViewController : UIViewController <PagePanel, IPageTabBarController, LuaObjectProxyCompatible>{
    NSMutableArray *viewControllers;
    NSURL *pageURL;
    PageM *model;
    
    UIView *contentView;
    
    ViewWidget *header;
    ViewWidget *background;
    MetroTabSwitcher *switcher;
    BOOL created;
    UIViewController<PagePanel> *parent;
    
    BOOL fronted;
    
    @public
    NSUInteger lastSelected;
}

@property (nonatomic, assign) PageSandbox *pageSandbox;
@property (nonatomic, readonly) AppContext *context;

@property (nonatomic, assign, setter = setViewControllers:, getter = getViewControllers) NSArray *viewControllers;

- (void) updateStatus: (BOOL) leftSwipe from: (NSUInteger) oldSelected withAnimation: (BOOL) animated;

@end
