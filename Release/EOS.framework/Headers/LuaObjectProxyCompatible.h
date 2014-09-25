//
//  LuaObjectProxyCompatible.h
//  EOSFramework
//
//  Created by Sam Chang on 3/19/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LuaObjectProxy.h"

@protocol LuaObjectProxyCompatible <NSObject>

- (LuaObjectProxy *) luaObjectProxy;

@end
