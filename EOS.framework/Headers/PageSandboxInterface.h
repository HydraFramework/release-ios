//
//  PageSandboxInterface.h
//  EOSFramework
//
//  Created by Sam Chang on 3/20/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DefaultSandboxInterface.h"

@protocol PageSandboxInterface <DefaultSandboxInterface>

- (NSString *) getPageId;

- (void) eval: (NSString *) script;

@end
