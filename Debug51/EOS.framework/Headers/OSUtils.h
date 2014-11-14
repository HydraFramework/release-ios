//
//  OSUtils.h
//  osFramework
//
//  Created by Song on 6/22/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PageSandbox.h"
#import "LuaFunction.h"

@class AppSandbox;
@class PNum;

@interface OSUtils : NSObject {
    
}

+ (NSString *) getLocalePath: (NSString *) filePath;

+ (NSString *) uuid;

+ (NSString *) md5String: (NSString *) input;

+ (NSString *) fileMD5:(NSString*)path;

+ (UIColor *) getColorFromString: (NSString *) colorString withDefaultColor: (UIColor *) color DEPRECATED_ATTRIBUTE;

+ (UIColor *) getColorFromObject: (NSObject *) colorObject withDefaultColor: (UIColor *) color;

+ (UIColor *) getColor: (NSObject *) colorObject withAlpha: (float) alpha withDefaultColor: (UIColor *) color;

+ (float) convertNumberFromObject: (PNum *) obj withParent: (float) parent;
+ (float) convertNumberFromObject: (PNum *) obj withParent: (float) parent withDefault: (float) val;

+ (BOOL) is_EmailSchema:(NSString *)email;

+ (NSInteger) compareVersion: (NSString *) version1 withVersion: (NSString *) version2;

+ (BOOL) unzip: (NSString *) sourcePath to: (NSString *) destPath;

+ (NSString *) getHash: (NSString *) url;

+ (void) execute: (NSObject *) script withSandbox: (PageSandbox *) sandbox DEPRECATED_ATTRIBUTE;

+ (void) executeDirect: (NSObject *) script withSandbox: (PageSandbox *) sandbox;

+ (void) executeDirect: (NSObject *) script withSandbox: (PageSandbox *) sandbox withObject: (NSObject *) obj;

+ (void) executeDirect: (NSObject *) script withSandbox: (PageSandbox *) sandbox withObject: (NSObject *) obj1 withObject: (NSObject *) obj2;

+ (NSObject *) getObject: (NSObject *) delegate withObject: (NSObject *) obj1 withObject: (NSObject *) obj2 withObject: (NSObject *) obj3 withObject: (NSObject *) obj4;

+ (id) getObject: (NSObject *) delegate withObject: (NSObject *) obj1 withObject: (NSObject *) obj2 withObject: (NSObject *) obj3;

+ (NSInteger) getInteger: (NSObject *) delegate withObject: (NSObject *) obj1 withObject: (NSObject *) obj2 withObject: (NSObject *) obj3;

+ (NSArray *) getArray: (NSObject *) delegate withObject: (NSObject *) obj1 withObject: (NSObject *) obj2 withObject: (NSObject *) obj3;

+ (NSDictionary *) getDictionary: (NSObject *) delegate withObject: (NSObject *) obj1 withObject: (NSObject *) obj2 withObject: (NSObject *) obj3;

+ (void) runBlockOnMain: (dispatch_block_t) blk;

+ (void) runSyncBlockOnMain: (dispatch_block_t) blk;

+ (void) runBlockOnBackground: (dispatch_block_t) blk;

+ (DefaultSandbox *) getSandboxFromState: (lua_State *) L;

+ (void) unRef: (NSObject *) ref;

+ (UIImage *) imageFromDataString: (NSString *) srcString;

@end
