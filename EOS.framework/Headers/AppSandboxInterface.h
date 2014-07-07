//
//  AppSandboxInterface.h
//  EOSFramework
//
//  Created by Sam Chang on 3/19/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DefaultSandboxInterface.h"

@protocol AppSandboxInterface <DefaultSandboxInterface>

- (void) eval: (NSString *) script;

- (BOOL) call: (NSString *) func : (NSArray *) arguments : (LuaFunction *) callback;

- (NSString *) getLoadModel;

@end
