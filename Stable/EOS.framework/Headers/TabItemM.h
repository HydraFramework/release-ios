//
//  TabItemM.h
//  EOSClient2
//
//  Created by Chang Sam on 11/4/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TabItemM : NSObject <NSCopying>

@property (nonatomic, strong) NSString *label;
@property (nonatomic, strong) NSString *image;
@property (nonatomic, strong) NSString *page;
@property (nonatomic, strong) NSString *appId;
@property (nonatomic, strong) NSObject *onclick;
@property (nonatomic, strong) NSString *package;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *badge;
@property (nonatomic, strong) NSDictionary *itemDic;


@end
