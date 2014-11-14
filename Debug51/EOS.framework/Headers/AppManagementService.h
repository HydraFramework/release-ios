//
//  AppManagementService.h
//  EOSFramework
//
//  Created by Sam Chang on 1/18/13.
//
//

#import <Foundation/Foundation.h>
#import "AbstractLuaTableCompatible.h"
#import "IService.h"
#import "LuaObjectProxyCompatible.h"
#import "IAppManagementService.h"

@interface AppManagementService : AbstractLuaTableCompatible <IService, IAppManagementService>{
    NSMutableDictionary *appPathsMap;
    NSMutableDictionary *manifestsMap;
    
    NSMutableDictionary *appSandboxMap;
}

@end
