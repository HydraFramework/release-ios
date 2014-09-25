//
//  PageSandbox.h
//  EOSClient2
//
//  Created by Chang Sam on 10/20/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppSandbox.h"
#import "DefaultSandbox.h"
#import "LuaState.h"
#import "PageM.h"
#import "PagePanel.h"
#import "LuaObjectProxy.h"
#import "PageSandboxInterface.h"
#import "LuaObjectProxyCompatible.h"
#import "LuaRef.h"
#import "LuaFunction.h"
#import "PageLifecycle.h"

@class AbstractUIWidget;

@interface PageSandbox : DefaultSandbox <LuaObjectProxyCompatible, PageSandboxInterface>{
    AppSandbox *appSandbox;
    NSMutableArray *editingFocusStack;
    LuaObjectProxy *proxy;
}

@property (nonatomic, assign) UIViewController<PagePanel> *pageController;
@property (nonatomic, readonly) LuaState *state;
@property (nonatomic, strong) PageM *model;
@property (nonatomic, readonly) id<PageLifecycle> lifecycle;
@property (nonatomic, readonly) NSString *pageId;

- (id) initWithAppSandbox: (AppSandbox *) sandbox withPageId: (NSString *) pid;

- (void) runLuaBuffer: (NSString *) buffer;
- (void) pushGlobalObject:(id)object withName:(const NSObject*)name;

- (NSURL *) resolveFile: (NSString *) path;

- (NSString *) getDataFile: (NSString *) path;

- (AppSandbox *) getAppSandbox;

- (GlobalSandbox *) getGlobalSandbox;

- (void) loadScripts: (PageM *) pagem;

- (void) pushEditingFocus: (AbstractUIWidget *) view;
- (void) removeEditingFocus: (AbstractUIWidget *) view;
- (AbstractUIWidget *) lastEditingFocus;

@end
