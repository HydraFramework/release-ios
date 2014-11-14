//
//  EOSTimer.h
//  EOSFramework
//
//  Created by Sam on 6/7/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LuaObjectProxyCompatible.h"
#import "IEOSTimer.h"
#import "LuaTableCompatible.h"

@class LuaFunction;

@interface EOSTimer : NSObject <LuaObjectProxyCompatible, IEOSTimer, LuaTableCompatible>{
    LuaFunction *func;
    NSTimeInterval sec;
    unsigned long long repeat;
    volatile BOOL stop;
}

- (id)initWithLuaFunction: (LuaFunction *) func withSeconds: (NSTimeInterval) sec withRepeat: (unsigned long long) prepeat;

@end
