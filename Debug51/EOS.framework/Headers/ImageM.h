//
//  ImageM.h
//  EOSClient2
//
//  Created by Song on 10/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIWidgetM.h"

@interface ImageM : UIWidgetM

@property (nonatomic, strong) NSObject *src;
@property (nonatomic, strong) NSString *placeholder;
@property (nonatomic, strong) NSString *scale;

@end
