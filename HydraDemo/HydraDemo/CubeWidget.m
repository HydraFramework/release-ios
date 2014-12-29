//
//  CubeWidget.m
//  HydraDemo
//
//  Created by Sam Chang on 12/29/14.
//  Copyright (c) 2014 Sam Chang. All rights reserved.
//

#import "CubeWidget.h"
#import <EOS/WidgetBuilder.h>
#import "CubeView.h"

@implementation CubeWidget

- (void) onCreateView{
    ViewM *m = (ViewM *) self.model;
    if (!view) {
        CubeView *v = [[CubeView alloc] initWithFrame: [self getActualCurrentRect]];
        v.widget = self;
        view = v;

        UIPanGestureRecognizer *panGesture = [[UIPanGestureRecognizer alloc] initWithTarget: self
                                                                                     action: @selector(onPanGesture:)];
        [v addGestureRecognizer: panGesture];
    }
    if (m.overflow == OverflowTypeHidden) {
        view.clipsToBounds = YES;
    }
    
    if (m.hasTouchDisabled) {
        view.userInteractionEnabled = !m.touchDisabled;
    }
}

- (void) onPanGesture: (UIPanGestureRecognizer *) panGesture{
    CGPoint point = [panGesture locationInView: view];
    switch (panGesture.state) {
        case UIGestureRecognizerStateBegan:
            startPoint = point;
            break;
        case UIGestureRecognizerStateChanged:{
            if ((viewIndex == 0 && point.x > startPoint.x)
                || (viewIndex == [subitems count] - 1 && point.x < startPoint.x)) {
                startPoint = point;
                break;
            }
            CATransform3D transform = CATransform3DIdentity;
            transform.m34 = -0.002;

            transform = CATransform3DTranslate(transform, 0, 0, -view.bounds.size.width * sqrt(0.75));
            CGFloat rotate = -rotationDelta - M_PI_2 *2/3 * (startPoint.x - point.x) / view.bounds.size.width;
            NSLog(@"rotate = %1.3f", rotate);
            transform = CATransform3DRotate(transform, rotate, 0, 1, 0);
            transform = CATransform3DTranslate(transform, 0, 0, view.bounds.size.width * sqrt(0.75));

            transformLayer.transform = transform;
        }
            break;
        case UIGestureRecognizerStateCancelled:
        case UIGestureRecognizerStateEnded:
            if (point.x > startPoint.x && viewIndex > 0) {
                viewIndex--;
                rotationDelta -= M_PI_2 *2/3;
            } else if (point.x < startPoint.x && viewIndex < [subitems count] - 1) {
                viewIndex++;
                rotationDelta += M_PI_2 *2/3;
            }

            [self refreshChildByViewIndex];

            CATransform3D transform = CATransform3DIdentity;

            transform = CATransform3DTranslate(transform, 0, 0, -view.bounds.size.width * sqrt(0.75));
            transform = CATransform3DRotate(transform, -rotationDelta, 0, 1, 0);
            transform = CATransform3DTranslate(transform, 0, 0, view.bounds.size.width * sqrt(0.75));

            transformLayer.transform = transform;

            break;

        default:
            break;
    }
}

- (void) refreshChildByViewIndex{
    NSArray *copy = [subitems copy];
    for (int i = 0; i < [copy count]; i++) {
        AbstractUIWidget *widget = [copy objectAtIndex: i];
        if (i == viewIndex) {
//            [view bringSubviewToFront: [widget innerView]];
        }
    }
}

- (NSUInteger) initSubviewIfRequired {
    NSUInteger count = 0;

    if (!initedSubview && !self.model.hidden) {
        transformLayer = [[CATransformLayer alloc] init];
        transformLayer.frame = view.bounds;

        CGFloat w = view.bounds.size.width;

        NSArray *copy = [subitems copy];
        for (int i = 0; i < [copy count]; i++) {
            AbstractUIWidget *widget = [copy objectAtIndex: i];

            count += [widget createView];
            CALayer *layer = [widget innerView].layer;
            if (i > 0) {
                CATransform3D transform = CATransform3DIdentity;
                transform = CATransform3DTranslate(transform, 0, 0, - w * sqrt(0.75));
                transform = CATransform3DRotate(transform, M_PI_2 * 2/3 * i, 0, 1, 0);
                transform = CATransform3DTranslate(transform, 0, 0, w * sqrt(0.75));

                layer.transform = transform;
            } else {
                layer.transform = CATransform3DIdentity;
            }
            [transformLayer addSublayer: layer];

//            [view addSubview: [widget innerView]];
        }

        [view.layer addSublayer: transformLayer];

        initedSubview = YES;
    }
    
    return count;
}

-(UIView *)innerView{
    return view;
}

@end
