//
//  ViewM.h
//  EOSClient2
//
//  Created by Song on 10/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIWidgetM.h"

typedef enum {
    LayoutTypeNone,
    LayoutTypeAbsolute,
    LayoutTypeFlowX,
    LayoutTypeFlowY
} LayoutType;

typedef enum {
    OverflowTypeNone,
    OverflowTypeVisible,
    OverflowTypeHidden,
    OverflowTypeScroll
}OverflowType;

@interface ViewM : UIWidgetM{
}

@property (nonatomic, strong) NSMutableArray *subitems;
@property (nonatomic, assign) LayoutType layout;
@property (nonatomic, assign) OverflowType overflow;
#ifdef DEBUG_EOS
@property (nonatomic, strong) NSObject *onmousedown;
@property (nonatomic, strong) NSObject *onmouseup;
#endif

@end
