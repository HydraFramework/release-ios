//
//  TextfieldM.h
//  EOSClient2
//
//  Created by Song on 10/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LabelM.h"

@interface TextfieldM : LabelM

@property (nonatomic, assign) BOOL password;
@property (nonatomic, assign) BOOL editable;
@property (nonatomic, assign) int maxLength;
@property (nonatomic, assign) UIKeyboardType keyboard;
@property (nonatomic, assign) UIReturnKeyType returnType;
@property (nonatomic, assign) UITextBorderStyle borderStyle;
@property (nonatomic, strong) NSObject *onReturnClick;
@property (nonatomic, strong) NSObject *onDoneClick;
@property (nonatomic, strong) NSObject *onblur;
@property (nonatomic, strong) NSObject *onfocus;
@property (nonatomic, strong) NSString *placeholder;

- (void) parseKeyboard: (NSString *) value;
- (NSString *) keyboardName;

- (void) parseBorderStyle: (NSString *) value;
- (NSString *) borderStyleName;

- (void) parseReturnType: (NSString *) value;
- (NSString *) returnTypeName;

@end
