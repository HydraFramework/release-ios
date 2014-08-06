//
//  MoveupM.m
//  HydraDemo
//
//  Created by Sam Chang on 8/6/14.
//  Copyright (c) 2014 Sam Chang. All rights reserved.
//

#import "MoveupM.h"
#import <EOS/ModelBuilder.h>

@implementation MoveupM

-(void)mergeFromDic:(NSDictionary *)dic{
    [super mergeFromDic: dic];
    
    if ([dic valueForKey: @"header"]) {
        self.header = [ModelBuilder buildModel: [dic valueForKey: @"header"]];
    }
    if ([dic valueForKey: @"headerHeight"]) {
        self.headerHeight = [[dic valueForKey: @"headerHeight"] integerValue];
    }
    if ([dic valueForKey: @"headerKeep"]) {
        self.headerKeep = [[dic valueForKey: @"headerKeep"] integerValue];
    }
}

- (id)copyWithZone:(NSZone *)zone{
    MoveupM *m = [super copyWithZone: zone];
    m.headerHeight = _headerHeight;
    m.header = [_header copy];
    m.headerKeep = _headerKeep;
    
    return m;
}

@end
