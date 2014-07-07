//
//  EventActionWrapper.h
//  EOSFramework
//
//  Created by Sam on 7/4/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import "EventAction.h"
#import "LuaTableCompatible.h"

@class EventDispatcher;

@interface EventActionWrapper : NSObject <LuaTableCompatible>{
    EventAction *wrapped;
    EventKey key;
    EventDispatcher *dispatcher;
}

- (id) initWithKey: (EventKey) k withAction: (EventAction *) action withDispatcher: (EventDispatcher *) d;

@end
