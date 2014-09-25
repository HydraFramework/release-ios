//
//  LuaProxyObject.h
//  LuaProxy
//
//  Created by Sam Chang on 1/16/12.
//  This file is public domain. It is provided without any warranty whatsoever,
//  and may be modified or used without attribution.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "lua.h"
#include "lualib.h"
#include "lauxlib.h"

@interface LuaProxyObject : NSProxy{
    Protocol *col;
    lua_State *L;
    int envRef;
    int8_t ret[16];
}

- (id) initWithProtocol: (Protocol *) value withLuaState: (lua_State *) al withEnv: (int) ref;

@end
