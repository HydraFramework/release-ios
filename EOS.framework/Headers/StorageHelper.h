//
//  StorageHelper.h
//  EOSClient2
//
//  Created by Chang Sam on 11/4/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StorageHelper : NSObject

+ (NSObject *) load: (NSString *) key scope: (NSString *) scope;
+ (BOOL) save: (NSString *) key value: (NSObject *) value scope: (NSString *) scope;
+ (BOOL) save: (NSString *) key value: (NSObject *) value scope: (NSString *) scope timeout: (NSTimeInterval) time;


+ (NSString *) loadString: (NSString *) key scope: (NSString *) scope;
@end
