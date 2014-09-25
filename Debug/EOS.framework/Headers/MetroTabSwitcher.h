//
//  MetroTabSwitcher.h
//  EOSFramework
//
//  Created by Sam on 8/15/12.
//
//

#import <UIKit/UIKit.h>

@class PageMetroTabViewController;

@interface MetroTabSwitcher : UIView{
    NSMutableArray *items;
    NSMutableDictionary *rectMap;
    CGPoint panStartPoint;
    NSTimeInterval panStartTime;
    
    CGRect lastItemRect;
}

@property (nonatomic, assign) PageMetroTabViewController * metroTabController;

- (void) update: (BOOL) leftSwipe from: (NSUInteger) oldSelected withAnimation: (BOOL) animated;

- (void) onSwipeGesture: (UISwipeGestureRecognizer *) recognizer;

@end
