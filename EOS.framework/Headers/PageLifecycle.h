//
//  PageLifecycle.h
//  EOSFramework
//
//  Created by Chang Sam on 2/2/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PageLifecycle <NSObject>

- (void) onNew;
- (void) onLoaded;
- (void) onCreated;
- (void) onReady;
- (void) onFronted;
- (void) onIdle;
//- (void) onDestroy DEPRECATED_ATTRIBUTE;

- (BOOL) onNavBack;

@end
