//
//  BusyWidget.h
//  EOSFramework
//
//  Created by Chang Sam on 12/1/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractUIWidget.h"

@interface BusyWidget : AbstractUIWidget{
    UIActivityIndicatorView *indicatorView;
    UIView *containView;
}

@end
