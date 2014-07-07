//
//  LuaTable.h
//  EOSFramework
//
//  Created by Sam Chang on 2/21/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LuaTable : NSObject

@property (nonatomic, readonly) NSMutableArray *array;
@property (nonatomic, readonly) NSMutableDictionary *map;
@end
