//
//  LuaLocation.h
//  EOSFramework
//
//  Created by Sam Chang on 4/27/13.
//
//

#import "AbstractLuaTableCompatible.h"
#import <CoreLocation/CoreLocation.h>

@interface LuaLocation : AbstractLuaTableCompatible

@property (nonatomic, readonly) CLLocation *location;

- (id)initWithLocation: (CLLocation *) value;

@end
