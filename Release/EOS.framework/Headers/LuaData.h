//
//  LuaData.h
//  EOSFramework
//
//  Created by Sam Chang on 14-9-15.
//  Copyright (c) 2014年 HP. All rights reserved.
//

#import "AbstractLuaTableCompatible.h"

@interface LuaData : AbstractLuaTableCompatible

@property (nonatomic, strong) NSData *data;

@end
