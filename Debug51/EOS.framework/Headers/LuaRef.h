//
//  LuaRef.h
//  EOSFramework
//
//  Created by Sam on 5/21/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "lua.h"
#include "LuaTableCompatible.h"
#import "ILuaReference.h"

@class LuaState;
@interface LuaRef : NSObject <LuaTableCompatible>{
    int ref;
    lua_State *L;
}

@property (nonatomic, getter = getRef, setter = setRef:) int ref;

- (id)initWithRef: (int) value withState: (lua_State *) st;

- (void) unref;

- (BOOL) isValid;

@end
