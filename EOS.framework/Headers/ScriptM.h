//
//  ScriptM.h
//  EOSClient2
//
//  Created by Song on 10/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScriptM : NSObject

@property (nonatomic, strong) NSString *src;

+ (ScriptM *) scriptWithSrc: (NSString *) s;

@end
