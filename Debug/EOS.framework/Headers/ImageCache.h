//
//  ImageCache.h
//  EOSFramework
//
//  Created by Sam Chang on 14-7-3.
//  Copyright (c) 2014年 HP. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LruCache.h"

@interface ImageCache : LruCache

+ (ImageCache *) sharedInstance;

@end
