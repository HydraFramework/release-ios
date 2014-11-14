//
//  TextfieldWidget.h
//  EOSClient2
//
//  Created by Song on 10/18/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractUIWidget.h"
#import "ITextfieldWidget.h"
#import "EOSTextField.h"

/**The Textfield Widget*/
@interface TextfieldWidget : AbstractUIWidget <UITextFieldDelegate, ITextfieldWidget>{
    EOSTextField *textfieldView;
    BOOL focus;
}

@property (nonatomic, readonly) TextfieldM *model;
@property (nonatomic, readonly) TextfieldM *stableModel;

@end
