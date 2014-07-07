//
//  MethodSwizzling.h
//  GreenBrowser
//
//  Created by Song on 10/17/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (Swizzle)

+ (BOOL)swizzleMethod:(SEL)origSelector withMethod:(SEL)newSelector;

@end
