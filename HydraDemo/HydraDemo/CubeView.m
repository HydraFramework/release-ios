//
//  CubeView.m
//  HydraDemo
//
//  Created by Sam Chang on 12/29/14.
//  Copyright (c) 2014 Sam Chang. All rights reserved.
//

#import "CubeView.h"

@implementation CubeView

-(UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event{
    return self;
}

@end
