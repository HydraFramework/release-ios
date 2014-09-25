//
//  LabelWidget.h
//  EOSClient2
//
//  Created by Chang Sam on 10/19/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractUIWidget.h"
#import "ILabelWidget.h"
#import "EOSLabel.h"
#import "LabelM.h"
#import "DTAttributedLabel.h"

@interface LabelWidget : AbstractUIWidget <ILabelWidget>{
    EOSLabel *labelView;
    DTAttributedLabel *attributedLabelView;
    UIView *view;
}

@property (nonatomic, readonly) LabelM *model;
@property (nonatomic, readonly) LabelM *stableModel;

@end
