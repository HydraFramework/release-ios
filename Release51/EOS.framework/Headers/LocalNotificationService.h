//
//  LocalNotificationService.h
//  EOSFramework
//
//  Created by Sam Chang on 5/28/14.
//  Copyright (c) 2014 HP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IService.h"
#import "LuaTableCompatible.h"
#import "AbstractLuaTableCompatible.h"

@interface LocalNotificationService : AbstractLuaTableCompatible <IService, LuaTableCompatible>

@end
