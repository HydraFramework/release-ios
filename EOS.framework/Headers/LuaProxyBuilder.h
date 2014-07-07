//
//  LuaProxyBuilder.h
//  LuaProxy
//
//  Created by Sam Chang on 1/16/12.
//  This file is public domain. It is provided without any warranty whatsoever,
//  and may be modified or used without attribution.
//

#import <Foundation/Foundation.h>
#import "lua.h"

@interface LuaProxyBuilder : NSObject

+ (id) buildDelegateByProtocol: (Protocol *) col withLuaState: (lua_State *) L;
+ (id) buildCoroutineDelegateByProtocol: (Protocol *) col withLuaState: (lua_State *) L;

@end
