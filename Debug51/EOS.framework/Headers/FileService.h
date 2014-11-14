//
//  FileService.h
//  EOSFramework
//
//  Created by Sam Chang on 14-9-15.
//  Copyright (c) 2014年 HP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IService.h"
#import "lua.h"
#import "LuaTableCompatible.h"
#import "AbstractUIWidget.h"
#import "AbstractLuaTableCompatible.h"
#import "LuaFunction.h"
#import "LuaFunctionWatcher.h"
#import "LuaData.h"

@interface FileService : AbstractLuaTableCompatible <IService, LuaTableCompatible> {
    lua_State *L;
}

- (LuaData *) load: (NSString *) path;

@end
