//
//  IViewWidget.h
//  EOSFramework
//
//  Created by Sam Chang on 3/21/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IAbstractUIWidget.h"
#import "AbstractUIWidget.h"

@protocol IViewWidget <IAbstractUIWidget>
- (AbstractUIWidget *) addChildJSON: (NSString *) jsonString DEPRECATED_ATTRIBUTE;

- (AbstractUIWidget *) addChildJSON: (NSString *) jsonString at: (int) idx DEPRECATED_ATTRIBUTE;

/**Add `Widget` in this View
 
 Lua Samples:
 
 local w = container:addChild{qName="textfield", id="password", height=44, backgroundAlpha=1, backgroundColor="#FF00FF"}
 w:setText("xxxxx")
 -- or
 w.text = "xxxx"
 
 @param the input json string with `Widget` definition
 @return the new created `Widget`
 */
- (AbstractUIWidget *) addChild: (id) t;

- (AbstractUIWidget *) addChild: (id) t at: (int) idx DEPRECATED_ATTRIBUTE;
- (AbstractUIWidget *) addChild: (id) t : (int) idx;

- (void) _LUA_removeChildById: (NSObject *) wid DEPRECATED_ATTRIBUTE;
- (void) _LUA_removeChild: (NSObject *) wid;

- (void) _LUA_removeChildAt: (int) idx;

- (int) _LUA_indexChildById: (NSObject *) wid DEPRECATED_ATTRIBUTE;
- (int) _LUA_indexChild: (NSObject *) wid;

- (void) _LUA_removeAllChildren;

- (void) _LUA_reLayoutChildren;

- (NSArray *) listChildren;
@end
