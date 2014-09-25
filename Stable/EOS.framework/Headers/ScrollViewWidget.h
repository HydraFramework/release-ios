//
//  ScrollViewWidget.h
//  EOSClient2
//
//  Created by Chang Sam on 11/2/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ViewWidget.h"
#import "IScrollViewWidget.h"
#import "ScrollViewM.h"

@interface ScrollViewWidget : ViewWidget <IScrollViewWidget, UIScrollViewDelegate>{
    CGPoint oldContentOffset;
    CGSize currentContentSize;
    CGPoint currentContentOffset;
    
    CGRect originalRect;
}

@property (nonatomic, readonly) ScrollViewM *model;
@property (nonatomic, readonly) ScrollViewM *stableModel;
@property (nonatomic, strong) AbstractUIWidget *editingFocusView;

@end
