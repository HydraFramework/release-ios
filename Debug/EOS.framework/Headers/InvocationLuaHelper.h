//
//  InvocationLuaHelper.h
//  EOSFramework
//
//  Created by Sam Chang on 3/19/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "lua.h"

@interface InvocationHolder : NSObject{
    @private
    void *data;
    id object;
}

+ (InvocationHolder *) holderWithPointer: (void *) p;
+ (InvocationHolder *) holderWithId: (id) obj;

@end

@interface InvocationLuaHelper : NSObject{
}

+ (void) pushInvocation: (NSInvocation *) invocation atIndex:(NSInteger)idx withLuaState: (lua_State *) L;

+ (InvocationHolder *) setInvocation: (NSInvocation *) invocation atIndex:(NSInteger)idx withLuaState: (lua_State *) L withIndex: (int) luaIndex;

+ (int) pushInvocationReturn: (NSInvocation *) invocation  withLuaState: (lua_State *) L;

+ (NSObject *) convertInvocationReturnToObject: (NSInvocation *) invocation;

+ (void) setInvocationReturn: (NSInvocation *) invocation withLuaState: (lua_State *) L withIndex: (int) idx;
@end
