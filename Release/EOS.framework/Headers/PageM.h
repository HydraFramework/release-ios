//
//  PageM.h
//  EOSClient2
//
//  Created by Song on 10/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ViewM.h"

typedef enum {
    PageTypeDefault = 1,
    PageTypeTabbar,
    PageTypeMetroTab
}PageType;

@interface MetroControlsM : NSObject

@property (nonatomic, strong) id activeFontColor;
@property (nonatomic, strong) id inactiveFontColor;
@property (nonatomic, strong) id activeFontSize;
@property (nonatomic, strong) id inactiveFontSize;
@property (nonatomic, strong) PNum *height;
@property (nonatomic, strong) PNum *marginLeft;

@end

@interface MetroM : NSObject

@property (nonatomic, strong) NSMutableArray *items;
@property (nonatomic, strong) MetroControlsM *controls;
@property (nonatomic, strong) ViewM *header;
@property (nonatomic, strong) ViewM *background;
@property (nonatomic, assign) NSUInteger selected;

@end

@interface TabbarM : NSObject

@property (nonatomic, strong) NSMutableArray *items;
@property (nonatomic, assign) NSUInteger selected;

@end

/** PageM is the model of the Page section
 */
@interface PageM : NSObject

/**The Id of this page, should be unique in the same app*/
@property (nonatomic, strong) NSString *itemId;

@property (nonatomic, strong) NSString *schema;

@property (nonatomic, strong) NSArray *metadata;

/**The Script section of this page
 
 Each item in this array contains plain script.
 */
@property (nonatomic, strong) NSMutableArray *scripts;

/**The [Layout](ViewWidget) section of this page*/
@property (nonatomic, strong) ViewM *layout;

@property (nonatomic, strong) MetroM *metro;

@property (nonatomic, strong) TabbarM *tabbar;

@property (nonatomic, strong) NSDictionary *itemDic;

@property (nonatomic, assign) PageType pageType;

@end
