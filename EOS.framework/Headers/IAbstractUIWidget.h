//
//  IAbstractUIWidget.h
//  EOSFramework
//
//  Created by Sam Chang on 3/21/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PackedArray.h"

@class LuaImage;

@protocol IAbstractUIWidget <NSObject>

- (void) _LUA_setAlpha: (NSNumber *) value;

- (float) getAlpha;

- (void) reload;

- (NSDictionary *) getModel;

- (void) suspendLayout;

- (void) resumeLayout;

- (LuaImage *) _LUA_getSnapshot;

- (LuaImage *) _COROUTINE_getContentSnapshot;

- (PackedArray *) getRect;

@end
