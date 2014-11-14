//
//  UploadDaemon.h
//  EOSFramework
//
//  Created by Chang Sam on 1/5/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FMDatabase.h"

@class GlobalSandbox;

@interface UploadDaemon : NSObject{
    FMDatabase *fmdb;
    NSRecursiveLock *dbLock;
    BOOL tasking;
}

- (id) initWithSandbox: (GlobalSandbox *) sandbox;

- (void) syncUpload;

- (void) asyncUpload: (double) sec;

- (BOOL) asyncPostRoute: (NSString *) route withValue: (NSString *) value withId: (NSString *) postId;

@end
