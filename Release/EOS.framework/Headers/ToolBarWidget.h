//
//  ToolBarWidget.h
//  EOSClient2
//
//  Created by Chang Sam on 10/28/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractUIWidget.h"
#import "IToolBarWidget.h"

@interface ToolBarWidget : AbstractUIWidget <IToolBarWidget>{
    UIToolbar *toolbar;
    NSMutableArray *items;
}

- (void) updateItemDic: (NSDictionary *) item withIndex: (int) idx;

@end
