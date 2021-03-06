//
//  DeviceService.h
//  EOSFramework
//
//  Created by Sam Chang on 5/29/14.
//  Copyright (c) 2014 HP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractLuaTableCompatible.h"
#import "IService.h"
#import "LuaObjectProxyCompatible.h"
#import "LuaFunction.h"
#import "ViewWidget.h"

@interface DeviceService : AbstractLuaTableCompatible <IService, MFMessageComposeViewControllerDelegate> {
    lua_State *L;
    NSMutableDictionary *soundMap;
}

+ (NSString *) getMacAddress;

- (NSNumber *) getWlan;

- (NSString *) getUserAgent;

- (void) setUserAgent: (NSString *) ua;

- (NSNumber *) getBatteryLevel;

- (BOOL) call: (NSString *) num;

- (BOOL) sms: (id) obj;

@end
