//
//  KeyBoardRectChangedEvent.h
//  EOSFramework
//
//  Created by Sam Chang on 14-8-8.
//  Copyright (c) 2014年 HP. All rights reserved.
//

#import "BroadcastEvent.h"

@interface KeyBoardRectChangedEvent : BroadcastEvent {
    CGRect rect;
}

- (id) initWithRect: (CGRect) value;

@end
