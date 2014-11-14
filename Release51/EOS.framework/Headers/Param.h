//
//  Param.h
//  EOSFramework
//
//  Created by Chang Sam on 12/12/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PageSandbox.h"

@protocol Param <NSObject>

@optional
- (void) setParam: (NSObject *) param;
- (void) setPageSandbox: (PageSandbox *) sandbox;

@end
