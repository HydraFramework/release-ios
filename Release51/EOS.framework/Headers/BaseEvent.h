//
//  BaseEvent.h
//  EOSClient2
//
//  Created by Chang Sam on 10/21/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EventConstants.h"
#import "AbstractLuaTableCompatible.h"

@interface BaseEvent : AbstractLuaTableCompatible

@property (nonatomic, readonly) BOOL broadcast;
@property (nonatomic, readonly) BOOL propagationStopped;
@property (nonatomic, readonly) EventKey key;

- (void) stopPropagation;

+ (id) event;


@end
