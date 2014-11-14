//
//  EOSList.h
//  EOSClient2
//
//  Created by Chang Sam on 10/20/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LuaTableCompatible.h"
#import "EOSListInterface.h"

@class EOSMap;

@interface EOSList : NSObject <EOSListInterface>{
    NSMutableArray *list;
    
    @public
    NSObject *parent;
}

- (id) initWithArray: (NSArray *) array;

@end
