//
//  EventAction.h
//  EOSFramework
//
//  Created by Sam on 7/4/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseEvent.h"

@interface EventAction : NSObject{
}

- (void) perform: (BaseEvent *) e;

@end
