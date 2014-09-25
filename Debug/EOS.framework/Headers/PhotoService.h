//
//  PhotoService.h
//  EOSFramework
//
//  Created by Sam Chang on 5/12/14.
//  Copyright (c) 2014 HP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IService.h"
#import "lua.h"
#import "LuaTableCompatible.h"
#import "AbstractUIWidget.h"
#import "AbstractLuaTableCompatible.h"
#import "LuaFunction.h"
#import "LuaFunctionWatcher.h"

#import <AssetsLibrary/AssetsLibrary.h>

@interface PhotoService : AbstractLuaTableCompatible <IService, LuaTableCompatible>

@property (nonatomic, readonly) ALAssetsLibrary * assetsLibrary;

- (void) load: (LuaFunction *) func;

@end
