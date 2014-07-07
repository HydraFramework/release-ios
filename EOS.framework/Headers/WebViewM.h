//
//  WebViewM.h
//  EOSClient2
//
//  Created by Song on 10/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIWidgetM.h"

@interface WebViewM : UIWidgetM

@property (nonatomic, strong) NSString *src;
@property (nonatomic, assign) BOOL zoomable;
@property (nonatomic, assign) BOOL opaque;

@end
