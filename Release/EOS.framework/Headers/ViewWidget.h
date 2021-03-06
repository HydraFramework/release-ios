//
//  ViewWidget.h
//  EOSClient2
//
//  Created by Song on 10/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractUIWidget.h"
#import "IViewWidget.h"
#import "EOSView.h"

/**The View Widget*/
@interface ViewWidget : AbstractUIWidget<IViewWidget>{
    NSMutableArray *subitems;
    
    CGRect contentRect;
    UIView *view;
    
    BOOL initedSubview;
}

@property (nonatomic, readonly) ViewM *model;
@property (nonatomic, readonly) ViewM *stableModel;

- (void) addWidget: (AbstractUIWidget *) widget;
- (void) addWidget: (AbstractUIWidget *) widget At: (int) idx;

-(id)initWithModel:(UIWidgetM *)m withView: (UIView *) v withPageSandbox: (PageSandbox *) sandbox;

- (void) reLayoutChildren;
- (void) removeAllChildren;

#ifdef DEBUG_EOS
- (NSUInteger) childrenCount;
- (NSUInteger) affectCount;
#endif

@end
