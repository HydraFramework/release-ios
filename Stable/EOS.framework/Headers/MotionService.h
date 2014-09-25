//
//  MotionService.h
//  EOSFramework
//
//  Created by Sam Chang on 6/4/14.
//  Copyright (c) 2014 HP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractLuaTableCompatible.h"
#import "IService.h"
#import "LuaObjectProxyCompatible.h"
#import <CoreMotion/CoreMotion.h>

@interface MotionService : AbstractLuaTableCompatible <IService> {
    CMMotionManager *motionManager;
    CMAttitude *referenceAttitude;

    NSMutableArray *watchers;
}

@end
