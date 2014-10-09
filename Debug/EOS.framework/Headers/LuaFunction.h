//
//  LuaFunction.h
//  EOSFramework
//
//  Created by Sam on 5/21/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import "LuaRef.h"
#import "lua.h"

@interface LuaFunction : LuaRef

typedef void (^callback_block_t)(NSObject *ret, ...);

- (NSObject *) executeWithReturnValue;
- (NSArray *) executeWithReturnValues;
- (NSObject *) executeWithReturnValue: (NSObject *) arg, ...;
- (NSArray *) executeWithReturnValues: (NSObject *) arg, ...;

- (void) executeWithoutReturnValue;
- (void) executeWithoutReturnValue: (NSObject *) arg, ...;

- (NSObject *) executeWithReturnValue: (BOOL) withReturnValue withArrayArguments: (NSArray *) args;
- (NSArray *) executeWithReturnValues: (BOOL) withReturnValues withArrayArguments: (NSArray *) args;

- (void) executeWithArrayArguments: (NSArray *) args withCallback: (callback_block_t) callback;

- (void) executeWithoutReturnValueWithArrayArguments: (NSArray *) args;
- (NSObject *) executeWithReturnValueWithArrayArguments: (NSArray *) args;

@end
