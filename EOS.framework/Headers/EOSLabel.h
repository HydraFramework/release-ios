//
//  EOSLabel.h
//  EOSFramework
//
//  Created by Sam on 5/16/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LabelM;
@class PageSandbox;

typedef enum VerticalAlignment {
    VerticalAlignmentTop,
    VerticalAlignmentMiddle,
    VerticalAlignmentBottom,
} VerticalAlignment;

@interface EOSLabel : UILabel{
#ifdef DEBUG_EOS
    UIColor *debugColor;
#endif
}

@property (nonatomic, assign) VerticalAlignment verticalAlign;
@property (nonatomic, assign) PageSandbox *pageSandbox;
@property (nonatomic, assign) LabelM *model;

@end
