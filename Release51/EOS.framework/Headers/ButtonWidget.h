//
//  ButtonWidget.h
//  EOSClient2
//
//  Created by Song on 10/18/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractUIWidget.h"
#import "ButtonM.h"
#import "EOSButton.h"

/**The Button Widget*/
@interface ButtonWidget : AbstractUIWidget{
    EOSButton *buttonView;
    UIView *buttonMaskView;
}

@property (nonatomic, readonly) ButtonM *model;
@property (nonatomic, readonly) ButtonM *stableModel;

@end
