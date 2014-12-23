//
//  AppSandbox.h
//  EOSClient2
//
//  Created by Chang Sam on 10/20/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GlobalSandbox.h"
#import "ManifestM.h"
#import "DefaultSandbox.h"
#import "LuaState.h"
#import "BaseEvent.h"
#import "LuaObjectProxyCompatible.h"
#import "LuaObjectProxy.h"
#import "AppSandboxInterface.h"
#import "AppLifecycle.h"
#import "ScreenScale.h"

@class LuaHelper;

@interface AppSandbox : DefaultSandbox <LuaObjectProxyCompatible, AppSandboxInterface>{
    LuaObjectProxy *proxy;
}

@property (nonatomic, readonly) GlobalSandbox *globalSandbox;
@property (nonatomic, readonly) LuaHelper *helper;
@property (nonatomic, readonly) ScreenScale *scale;
@property (nonatomic, readonly) id<AppLifecycle> lifecycle;
@property (nonatomic, readonly) NSMutableString *luaPath;
@property (nonatomic, readonly) NSString *dataPath DEPRECATED_ATTRIBUTE;
@property (nonatomic, readonly) NSString *appPath DEPRECATED_ATTRIBUTE;
@property (nonatomic, strong) ManifestM *manifest;
@property (nonatomic, readonly) NSMutableArray *pageList;
@property (nonatomic, readonly) LuaState *state;
@property (nonatomic, readonly) NSMutableArray *libraryPaths;
//@property (nonatomic, assign) int envRef;

- (id) initWithGlobalSandbox: (GlobalSandbox *) sandbox withManifest: (ManifestM *) m withAppPath: (NSString *) path withDataPath: (NSString *) dpath;

- (NSURL *) resolveFile: (NSString *) path;

- (NSString *) getDataFile: (NSString *) path;

- (void) reloadLuaPath;

- (GlobalSandbox *) getGlobalSandbox;

- (AppSandbox *) getAppSandbox;
@end
