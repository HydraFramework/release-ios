//
//  WidgetMap.h
//  EOSClient2
//
//  Created by Chang Sam on 10/19/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIWidgetM.h"

@interface WidgetMap : NSObject

+ (void) bind: (NSString *) qname
withModelClassName: (NSString *) mClsName
withWidgetClassName: (NSString *) wClsName;

+ (NSString *) getModelClassName: (NSString *) qname;
+ (NSString *) getWidgetClassName: (NSString *) qname;

+ (NSString *) getWidgetClassNameByModel: (UIWidgetM *) model;

@end
