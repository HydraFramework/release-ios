//
//  AppLifecycle.h
//  EOSFramework
//
//  Created by Sam on 7/4/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AppLifecycle <NSObject>

- (void) onNew;
- (void) onPreloaded;
- (void) onDownloaded;
- (void) onUnpacked;
- (void) onReloaded;
- (void) onReady;

- (void) onInstalled;
- (void) onPatched: (NSString *) oldVersion;

@end
