//
//  AppParam.h
//  EOSClient2
//
//  Created by Chang Sam on 10/26/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PageSandbox.h"

@interface AppParam : NSObject

@property (nonatomic, strong) NSString *appId;
@property (nonatomic, strong) NSString *pageId;
@property (nonatomic, assign) BOOL animation;
@property (nonatomic, assign) BOOL toTop;
@property (nonatomic, assign) BOOL success;
@property (nonatomic, assign) BOOL useCurrentStack;
@property (nonatomic, assign) PageSandbox *pageSandbox;

+ (AppParam *) param;

@end
