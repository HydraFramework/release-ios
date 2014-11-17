//
//  GlobalSandbox.h
//  EOSClient2
//
//  Created by Chang Sam on 10/20/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DefaultSandbox.h"
#import "GlobalSandboxInterface.h"
#import "LuaObjectProxyCompatible.h"
#import "LuaObjectProxy.h"
#import "LuaState.h"
#import "GlobalSandboxDelegate.h"

@class AppSandbox;
@class LuaHelper;

@interface GlobalSandbox : DefaultSandbox <GlobalSandboxInterface, LuaObjectProxyCompatible>{
    LuaObjectProxy *proxy;
    
    BOOL stop;
}

@property (nonatomic, readonly) NSString *documentRoot;
@property (nonatomic, readonly) NSString *libraryRoot;
@property (nonatomic, readonly) NSDictionary *environment;
@property (nonatomic, readonly) NSString *appsRoot;
@property (nonatomic, readonly) NSString *cacheRoot;

@property (nonatomic, strong) NSString *userAgent;

//@property (nonatomic, readonly) LuaState *state;

@property (nonatomic, readonly) BOOL EOS_DEBUG_BOOL;
@property (nonatomic, readonly) BOOL EOS_DEBUGGER_BOOL;
@property (nonatomic, assign) BOOL screenAutoRotation;
@property (nonatomic, assign) BOOL statusBarHidden;

@property (nonatomic, assign) id<GlobalSandboxDelegate> delegate;

- (NSString *) getSecureCode;

- (NSString *) getSessionId;

+ (GlobalSandbox *) sandbox;

@end
