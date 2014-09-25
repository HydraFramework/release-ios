//
//  EOSScrollView.h
//  EOSFramework
//
//  Created by Sam Chang on 8/21/12.
//
//

#import <UIKit/UIKit.h>
#import "ScrollViewM.h"
#import "ScrollViewWidget.h"

@interface EOSScrollView : UIScrollView{
#ifdef DEBUG_EOS
    UIColor *debugColor;
#endif
}

//@property (nonatomic, assign) ScrollViewWidget *widget;

@end
