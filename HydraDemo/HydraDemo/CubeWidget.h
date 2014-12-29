//
//  CubeWidget.h
//  HydraDemo
//
//  Created by Sam Chang on 12/29/14.
//  Copyright (c) 2014 Sam Chang. All rights reserved.
//

#import <EOS/ViewWidget.h>

@interface CubeWidget : ViewWidget {
    CATransformLayer *transformLayer;
    NSInteger viewIndex;
    CGPoint startPoint;
    CGFloat rotationDelta;
}

@end
