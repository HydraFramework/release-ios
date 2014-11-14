//
//  IDownloadInfo.h
//  EOSFramework
//
//  Created by Sam Chang on 1/17/13.
//
//

#import <Foundation/Foundation.h>
#import "LuaFunction.h"
#import "LuaFunctionWatcher.h"

@protocol IDownloadInfo <NSObject>

- (LuaFunctionWatcher *) addProgressWatcher: (LuaFunction *) func;
- (LuaFunctionWatcher *) addStatusWatcher: (LuaFunction *) func;
- (void) setUrl: (NSString *) value;

@end
