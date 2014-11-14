//
//  ControllerMap.h
//  EOSFramework
//
//  Created by Chang Sam on 12/12/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ControllerMap : NSObject

+ (void) bind: (NSString *) name withClass: (NSString *) clsName;
+ (NSString *) classByName: (NSString *) name;

@end
