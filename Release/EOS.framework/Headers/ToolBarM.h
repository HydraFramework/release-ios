//
//  ToolBarM.h
//  EOSClient2
//
//  Created by Chang Sam on 10/19/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIWidgetM.h"
#import "PNum.h"

typedef enum{
    ToolBarItemMTypeButton,
    ToolBarItemMTypeSpaceFill,
    ToolBarItemMTypeSpaceFix
} ToolBarItemMType;

@interface ToolBarItemM : NSObject <NSCopying>

@property (nonatomic, assign) ToolBarItemMType type;
@property (nonatomic, assign) BOOL done;
@property (nonatomic, assign) int tag;
@property (nonatomic, assign) BOOL border;

@property (nonatomic, strong) NSString *label;
@property (nonatomic, strong) PNum *width;
@property (nonatomic, strong) NSString *image;
@property (nonatomic, strong) NSObject *onclick;

@end

@interface ToolBarM : UIWidgetM

@property (nonatomic, strong) NSMutableArray *subitems;
@property (nonatomic, assign) BOOL tint;
@property (nonatomic, assign) int tagCount;

- (void) updateItemM: (ToolBarItemM *) m withItemDic: (NSDictionary *) item;

@end
