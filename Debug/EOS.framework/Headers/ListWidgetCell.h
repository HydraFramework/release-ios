//
//  ListWidgetCell.h
//  EOSFramework
//
//  Created by Chang Sam on 11/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractUIWidget.h"

@class ListWidget;
@interface ListWidgetCell : UITableViewCell

@property (nonatomic, strong) AbstractUIWidget *widget;
@property (nonatomic, strong) NSMutableDictionary *dp;
@property (nonatomic, assign) ListWidget *listWidget;

@property (nonatomic, strong) NSIndexPath *indexPath;


@end
