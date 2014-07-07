//
//  ILuaReference.h
//  EOSFramework
//
//  Created by Sam on 9/5/13.
//
//

#import <Foundation/Foundation.h>

@protocol ILuaReference <NSObject>

- (void) setRef: (int) value;
- (int) getRef;
- (void) __gc;

@end
