//
//  TextAreaWidget.h
//  EOSClient2
//
//  Created by Chang Sam on 10/19/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractUIWidget.h"
#import "ITextAreaWidget.h"
#import "EOSTextView.h"
#import "TextAreaM.h"

@interface TextAreaWidget : AbstractUIWidget <ITextAreaWidget, UITextViewDelegate>{
    EOSTextView *textView;
}

@property (nonatomic, readonly) TextAreaM *model;
@property (nonatomic, readonly) TextAreaM *stableModel;

@end
