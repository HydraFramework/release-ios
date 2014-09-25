//
//  LuaTableCompatible.h
//  EOSFramework
//
//  Created by Sam Chang on 3/6/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LuaTable.h"
#import "lua.h"

#define IGNORE_VALUE [NSNull null]

@protocol LuaTableCompatible <NSObject>

@optional

- (LuaTable *) toLuaTable;

- (BOOL) newIndex: (NSObject *) key withValue: (NSObject *) value;

- (NSObject *) index: (NSObject *) key;

- (void) __gc;

- (void) setCurrentState: (lua_State *) L;

@end
