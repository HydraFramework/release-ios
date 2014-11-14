//
//  EOSMap.h
//  EOSClient2
//
//  Created by Chang Sam on 10/20/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LuaTableCompatible.h"
#import "EOSMapInterface.h"

@class EOSList;

/**EOS Map Collection*/
@interface EOSMap : NSObject <EOSMapInterface>{
    NSMutableDictionary *dataMap;
    
#ifdef DEBUG_EOS
    @public
    NSObject *parent;
#endif
}

@end
