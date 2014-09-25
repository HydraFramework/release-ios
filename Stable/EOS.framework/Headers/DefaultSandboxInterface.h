//
//  DefaultSandboxInterface.h
//  EOSFramework
//
//  Created by Sam Chang on 3/19/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOSMapInterface.h"

@protocol DefaultSandboxInterface <EOSMapInterface>
- (id) getAppSandbox;

- (id) getGlobalSandbox;

- (EOSMap *) getMap: (NSString *) key;

- (EOSList *) getList: (NSString *) key;

- (BOOL) put: (NSString *) key value: (NSObject *) value;

- (BOOL) remove: (NSString *) key;

- (NSObject *) get: (NSString *) key;

- (BOOL) clear;

- (EOSList *) keys;

- (EOSList *) values;

- (NSString *) tostring;

- (NSString *) getAppPath;

- (NSString *) getDataPath;

- (NSString *) getAppId;

- (NSString *) getAppVersion;

- (NSString *) getScopeId;

@end
