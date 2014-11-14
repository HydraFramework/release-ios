//
//  EventDispatcher.h
//  EOSFramework
//
//  Created by Sam on 7/4/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseEvent.h"
#import "EventActionWrapper.h"

@interface EventDispatcher : NSObject{
    NSMutableDictionary *eventsMap;
}

- (int) dispatchEvent: (BaseEvent *) e;

- (EventActionWrapper *) bind: (EventKey) key action: (EventAction *) action;

- (void) unbind: (EventKey) key action: (EventAction *) action;

@end
