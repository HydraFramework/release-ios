//
//  IImageWidget.h
//  EOSFramework
//
//  Created by Sam Chang on 3/21/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IAbstractUIWidget.h"
#import "LuaImage.h"

@protocol IImageWidget <IAbstractUIWidget>

/**set `Image` into this `Widget`
 
 Lua Samples:
 
 widget:setImage(img)
 
 @param img The `Image` to be set into this `Widget`
 @return `YES` on success, `NO` on failed.
 @see getImage
 */
- (void) _LUA_setImage: (LuaImage *) img;

/**get `Image` in this `Widget`
 
 Lua Samples:
 
 local image = widget:getImage()
 widget2:setImage(image)
 
 @return `Image` in this `Widget`
 @see setImage:
 */
- (LuaImage *) _LUA_getImage;

- (void) setSrc: (NSObject *) src;
- (NSObject *)getSrc;
- (void) setScale: (NSString *) scale;
- (void) setPlaceHolder: (NSString *) src;

@end
