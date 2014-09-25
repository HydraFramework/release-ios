//
//  IToolBarWidget.h
//  EOSFramework
//
//  Created by Sam Chang on 3/21/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol IToolBarWidget <NSObject>

- (void) update: (id) data index: (int) idx;

- (void) removeAllChildren;

- (void) addChild: (id) t;

- (void) removeChildAt: (int) idx;

@end
