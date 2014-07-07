//
//  IPageTabBarController.h
//  EOSFramework
//
//  Created by Sam on 8/15/12.
//
//

#import <Foundation/Foundation.h>

@protocol IPageTabBarController <NSObject>

- (BOOL) add: (NSObject *) item;

- (BOOL) selectByName: (NSString *) name;

- (BOOL) selectByIndex: (NSUInteger) idx;

- (BOOL) updateName: (NSString *) name badge: (NSString *) badge;

- (BOOL) updateIndex: (NSUInteger) idx badge: (NSString *) badge;

- (void) clear;

@end
