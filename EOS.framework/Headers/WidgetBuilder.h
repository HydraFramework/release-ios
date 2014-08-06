//
//  WidgetBuilder.h
//  EOSClient2
//
//  Created by Song on 10/18/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIWidgetM.h"
#import "ViewWidget.h"
#import "PageM.h"

/** Widget Builder
 
 WidgetBuilder is the tools to build [Widget](AbstractUIWidget)
 */
@interface WidgetBuilder : NSObject{
}

/**Build PagePanel from PageM

 @param pageURL The page model to build
 @param appsandbox The App `Sandbox` from which we build the page
 @return the page view controller based on the input page
 */
+ (UIViewController<PagePanel> *) buildPage: (NSURL *) pageURL withSandbox: (PageSandbox *) sandbox;

/**Build PagePanel from PageId
 
 @param pageId The pageId to build
 @param appsandbox The App `Sandbox` from which we build the page
 @return the page view controller based on the input page
 */
+ (UIViewController<PagePanel> *) buildPageId: (NSString *) pageId withAppSandbox: (AppSandbox *) appsandbox;


/**Build single `Widget`
 
 @param widgetm the model of the `Widget`
 @param sandbox the `Sandbox` of this `Widget`
 @return the output `Widget`
 */
+ (AbstractUIWidget *) buildWidget: (UIWidgetM *) widgetm withPageSandbox: (PageSandbox *) sandbox;

@end
