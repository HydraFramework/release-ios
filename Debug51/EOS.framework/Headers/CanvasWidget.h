//
//  CanvasWidget.h
//  EOSFramework
//
//  Created by Sam on 5/9/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractUIWidget.h"
#import "ICanvasWidget.h"

@class CanvasDisplayView;

@interface CanvasWidget : AbstractUIWidget <ICanvasWidget>{
    CanvasDisplayView *view;
    
    CGContextRef bitmapContext;
    void *bitmapBuff;
    
    NSRecursiveLock *bitmapLock;
}


@end
