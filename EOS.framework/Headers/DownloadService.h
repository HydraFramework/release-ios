//
//  DownloadService.h
//  EOSFramework
//
//  Created by Sam Chang on 1/11/13.
//
//

#import <Foundation/Foundation.h>
#import "AbstractLuaTableCompatible.h"
#import "IService.h"
#import "LuaObjectProxyCompatible.h"
#import "FMDatabase.h"
#import "IDownloadService.h"

@interface DownloadService : AbstractLuaTableCompatible <IService, LuaObjectProxyCompatible, IDownloadService>{
    FMDatabase *downloaddb;
    NSMutableDictionary *downloadInfos;
}

@end
