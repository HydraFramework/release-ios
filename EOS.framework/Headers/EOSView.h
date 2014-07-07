//
//  EOSView.h
//  EOSFramework
//
//  Created by Sam on 8/3/12.
//
//

#import <UIKit/UIKit.h>
#import "AbstractUIWidget.h"

@interface EOSView : UIView{
#ifdef DEBUG_EOS
    UIColor *debugColor;
#endif
}

@property (nonatomic, assign) AbstractUIWidget *widget;

@end
