//
//  MoveupWidget.m
//  HydraDemo
//
//  Created by Sam Chang on 8/6/14.
//  Copyright (c) 2014 Sam Chang. All rights reserved.
//

#import "MoveupWidget.h"
#import <EOS/ListWidget.h>
#import <EOS/WidgetBuilder.h>
#import <EOS/OSUtils.h>

@implementation MoveupWidget

- (void)onCreateView {
    [super onCreateView];
    
    _header = (ViewWidget *) [WidgetBuilder buildWidget: self.model.header withPageSandbox: self.pageSandbox];
    
    UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc] initWithTarget: self action: @selector(onPan:)];
    [[self innerView] addGestureRecognizer: pan];
    
    lastHeaderTransform = CGAffineTransformIdentity;
}

- (void) reloadIndex{
    [UIView animateWithDuration: 0.2
                     animations:^{
                         for (ListWidget *widget in subitems) {
                             [widget innerView].transform = CGAffineTransformMakeTranslation(-[_header innerView].frame.size.width * index, 0);
                         }
                         if (index != panStartIndex) {
                             if (index > 0) {
                                 [_header innerView].transform = CGAffineTransformMakeTranslation(0, self.model.headerKeep - self.model.headerHeight);
                             } else {
                                 [_header innerView].transform = lastHeaderTransform;
                             }
                         }
                         panStartIndex = index;
                     }];
    
    [OSUtils executeDirect: self.model.onchange withSandbox: self.pageSandbox withObject: self withObject: [NSNumber numberWithInt: index]];
//    selectionView.frame = CGRectMake(selectionView.superview.frame.size.width / 4 * index, 0, selectionView.superview.frame.size.width/4, 40);
}

- (void) onPan: (UIPanGestureRecognizer *) gesture {
    CGPoint point = [gesture locationInView: [self innerView]];
    switch (gesture.state) {
        case UIGestureRecognizerStateBegan:
            panStartPoint = point;
            panStartIndex = index;
            break;
        case UIGestureRecognizerStateChanged:{
            CGFloat tx = -[_header innerView].frame.size.width * index + (point.x - panStartPoint.x);
            for (ListWidget *widget in subitems) {
                [widget innerView].transform = CGAffineTransformMakeTranslation(tx, 0);
            }
        }
            break;
        case UIGestureRecognizerStateEnded:
        case UIGestureRecognizerStateCancelled:
            if (point.x - panStartPoint.x > 10) {
                index--;
                if (index < 0) {
                    index = 0;
                }
            } else if (point.x - panStartPoint.y < -10) {
                index++;
                if (index > [subitems count] - 1) {
                    index = [subitems count] - 1;
                }
            }
            
            [self reloadIndex];
            break;
        default:
            break;
    }
}

- (void)scrollViewDidScroll:(UIScrollView *)scrollView{
    CGPoint point = scrollView.contentOffset;
    CGFloat ty = - point.y;
    ty = ty < self.model.headerKeep ? self.model.headerKeep : ty;
    ty = ty > self.model.headerHeight ? self.model.headerHeight : ty;
    
    CGAffineTransform transform = CGAffineTransformMakeTranslation(0, ty - self.model.headerHeight);
    [_header innerView].transform = transform;
    lastHeaderTransform = transform;
}

-(NSUInteger)createView{
    NSUInteger count = [super createView];
    
    if ([subitems count] > 0) {
        ListWidget *widgetHome = [subitems objectAtIndex: 0];
        widgetHome.listView.contentInset = UIEdgeInsetsMake(self.model.headerHeight, 0 ,0, 0);
        widgetHome.delegate = self;
        
        for (int i = 1; i < [subitems count]; i++) {
            ListWidget *widget = [subitems objectAtIndex: i];
            widget.listView.contentInset = UIEdgeInsetsMake(self.model.headerKeep, 0 ,0, 0);
        }
    }
    
    CGRect headerRect = [_header measureRect: CGSizeMake(currentRect.size.width, self.model.headerHeight)];
    _header->currentRect = headerRect;
    [_header createView];
    [[self innerView] addSubview: [_header innerView]];

    return count;
}

-(LuaObjectProxy *)luaObjectProxy{
    LuaObjectProxy *proxy = [super luaObjectProxy];
    [proxy addProtocol: @protocol(IMoveupWidget)];
    return proxy;
}

- (void) _LUA_switch: (NSNumber *) value{
    index = [value integerValue];
    
    [self reloadIndex];
}

-(void)reloadRect {
    [super reloadRect];

    for (int i = 0; i < [subitems count]; i++) {
        ListWidget *widget = [subitems objectAtIndex: i];
        [widget innerView].frame = CGRectMake(i * currentRect.size.width, 0, currentRect.size.width, currentRect.size.height);
    }
    
    [_header reloadRect];
}

-(void)setViewFrame:(CGRect)rect {
    [super setViewFrame: rect];
    
    for (int i = 0; i < [subitems count]; i++) {
        ListWidget *widget = [subitems objectAtIndex: i];
        [widget innerView].frame = CGRectMake(i * currentRect.size.width, 0, currentRect.size.width, currentRect.size.height);
    }
    
}

@end
