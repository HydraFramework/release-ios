//
//  CubeView.h
//  HydraDemo
//
//  Created by Sam Chang on 12/29/14.
//  Copyright (c) 2014 Sam Chang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AbstractUIWidget;

@interface CubeView : UIScrollView

@property (nonatomic, strong) AbstractUIWidget *widget;
@property (nonatomic, readonly) UIView *actionView;

@end
