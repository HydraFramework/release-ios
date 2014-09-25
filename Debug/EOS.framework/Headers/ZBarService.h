//
//  ZBarService.h
//  EOSFramework
//
//  Created by Sam Chang on 5/20/14.
//  Copyright (c) 2014 HP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractLuaTableCompatible.h"
#import "IService.h"
#import "LuaObjectProxyCompatible.h"
#import "LuaFunction.h"
#import "ViewWidget.h"
#import "ZBarSDK.h"

@interface ZBarService : AbstractLuaTableCompatible <IService, ZBarReaderDelegate> {
    lua_State *L;
    NSMutableArray *configs;
    CGRect scanCrop;
}

@property (nonatomic, strong) ViewWidget *overlay;
@property (nonatomic, strong) LuaFunction *callback;
@property (nonatomic, strong) ZBarReaderViewController *reader;

- (void) scan: (LuaFunction *) callback;

@end
