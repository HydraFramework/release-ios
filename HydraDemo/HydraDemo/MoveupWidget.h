//
//  MoveupWidget.h
//  HydraDemo
//
//  Created by Sam Chang on 8/6/14.
//  Copyright (c) 2014 Sam Chang. All rights reserved.
//

#import <EOS/ViewWidget.h>
#import <EOS/ListWidget.h>
#import "MoveupM.h"

@protocol IMoveupWidget <NSObject>

- (void) _LUA_switch: (NSNumber *) index;

@end

@interface MoveupWidget : ViewWidget <ListWidgetDelegate, IMoveupWidget>{
    CGPoint panStartPoint;
    NSInteger index;
    NSInteger panStartIndex;
}

@property (nonatomic, readonly) MoveupM *model;
@property (nonatomic, readonly) MoveupM *stableModel;

@property (nonatomic, readonly) ViewWidget *header;

@end
