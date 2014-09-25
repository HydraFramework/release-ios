//
//  PNum.h
//  EOSClient2
//
//  Created by Song on 10/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PNum : NSObject <NSCopying>{
    float value;
    BOOL percentage;
    BOOL usingAuto;
}

@property (nonatomic, readonly) float value;
@property (nonatomic, readonly) BOOL percentage;
@property (nonatomic, readonly) BOOL usingAuto;

+ (PNum *) pnumWithObject: (NSObject *) obj;
+ (PNum *) pnumWithValue: (float) v withPercentage: (BOOL) p;

- (float) pixelValue: (float) parent;
- (float) pixelValue: (float) parent withDefault: (float) v;

- (NSObject *) getObject;

@end
