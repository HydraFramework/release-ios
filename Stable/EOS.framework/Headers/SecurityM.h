//
//  Security.h
//  EOSClient2
//
//  Created by Song on 10/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SecurityM : NSObject

@property (nonatomic, strong) NSString *login;
@property (nonatomic, readonly) NSMutableArray *roles;

@end
