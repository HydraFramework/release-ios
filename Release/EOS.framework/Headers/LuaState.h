//
//  LuaState.h
//  EOSFramework
//
//  Created by Sam on 5/28/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import "LuaRef.h"
#include "lua.h"

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#import "LuaRef.h"
#import "LuaFunction.h"

@class DefaultSandbox;

@interface LuaState : LuaRef

- (lua_State*) state;

//- (void) runBuffer: (NSString*)buf;
//- (void) runData: (NSData*)buf;
//- (void) runFileAtPath:(NSString*)filePath;

- (void) runBuffer: (NSString*)buf withEnv: (int) ref;
- (void) runData: (NSData*)buf withEnv: (int) ref;
- (void) runFileAtPath:(NSString*)filePath withEnv: (int) ref;

//- (void) pushGlobalObject:(id)object withName:(const NSObject*) key;
- (void) pushRegistyObject:(id)object withName:(const NSString*) key;
- (void) gc;

+ (void) exceptionAlert: (NSString *) message;

+ (void) resumeForCoroutine: (lua_State *) cL withArgCount: (int) count;

@end
