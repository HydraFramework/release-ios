//
//  EOSListInterface.h
//  EOSFramework
//
//  Created by Sam Chang on 3/19/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LuaTableCompatible.h"

@class EOSMap, EOSList;

@protocol EOSListInterface <LuaTableCompatible>

- (EOSMap *) addMap;

- (EOSList *) addList;

- (BOOL) add: (NSObject *) value;

- (BOOL) remove: (NSObject *) value;

- (NSObject *) get: (NSUInteger) idx;

- (NSObject *) removeAt: (NSUInteger) idx;

- (BOOL) clear;

- (NSUInteger) size;

- (NSString *) tostring;

- (NSArray *) tolua DEPRECATED_ATTRIBUTE;

- (NSArray *) totable;

@end
