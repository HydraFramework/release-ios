//
//  DefaultSandbox.h
//  EOSClient2
//
//  Created by Chang Sam on 10/20/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOSMap.h"
#import "DefaultSandboxInterface.h"
#import "EventDispatcher.h"

@interface DefaultSandbox : EOSMap <DefaultSandboxInterface>{
    EventDispatcher *dispatcher;
}

- (void) destroy;

- (NSString *) getScopeId;

- (int) dispatchEvent: (BaseEvent *) e;

@end
