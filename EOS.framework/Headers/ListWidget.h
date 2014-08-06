//
//  ListWidget.h
//  EOSFramework
//
//  Created by Chang Sam on 11/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractUIWidget.h"
#import "IListWidget.h"
#import "ListM.h"

@interface ListSectionModel : NSObject 

@property (nonatomic, readonly) NSMutableDictionary *header;
@property (nonatomic, readonly) NSMutableDictionary *footer;
@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic, readonly) NSString *section;
@property (nonatomic, assign) int order;
@property (nonatomic, strong) NSString *indexTitle;

-(id)initWithSection: (NSString *) s;

@end

@protocol ListWidgetDelegate <NSObject>

- (void)scrollViewDidScroll:(UIScrollView *)scrollView;

@end

@interface ListWidget : AbstractUIWidget <UITableViewDataSource, UITableViewDelegate, IListWidget> {
    NSMutableArray *sectionList;
    NSMutableArray *sectionIndexTitles;
    NSMutableDictionary *sectionHeaderWidgetMap;
    NSMutableDictionary *sectionFooterWidgetMap;
    
    
    NSMutableArray *pendingReloadCellIndexPaths;
    BOOL reloadPending;
}

@property (nonatomic, readonly) ListM *model;
@property (nonatomic, readonly) ListM *stableModel;

@property (nonatomic, readonly) UITableView *listView;

@property (nonatomic, assign) id<ListWidgetDelegate> delegate;

- (void) setDataProvider: (id) data;

- (void) reloadCellAtIndexPath: (NSIndexPath *) path;

@end
