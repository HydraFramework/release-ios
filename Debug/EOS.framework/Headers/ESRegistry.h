//
//  ServiceLocator.h
//  EOSFramework
//
//  Created by Sam Chang on 1/11/13.
//
//
#import <Foundation/Foundation.h>
#import "IService.h"
#import "LuaState.h"

@interface ESRegistry : NSObject {
    NSMutableDictionary *services;
    NSMutableDictionary *singletonServices;
}

+ (ESRegistry *) getInstance;

- (void) registerService: (NSString *) service withName: (NSString *) name;

- (NSObject<IService> *) getService: (NSString *) name;
- (NSObject<IService> *) getService: (NSString *) name withState: (lua_State *) L;

@end
