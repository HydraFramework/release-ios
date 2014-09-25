//
//  ImageService.h
//  EOSFramework
//
//  Created by Sam Chang on 5/12/14.
//  Copyright (c) 2014 HP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LuaImage.h>
#import "IService.h"
#import "lua.h"
#import "LuaTableCompatible.h"
#import "AbstractUIWidget.h"
#import "AbstractLuaTableCompatible.h"
#import "LuaFunction.h"
#import "LuaFunctionWatcher.h"

@interface ImageService : AbstractLuaTableCompatible <IService, LuaTableCompatible>{
    lua_State *L;
}

- (LuaImage *) load: (NSString *) path;

@end
