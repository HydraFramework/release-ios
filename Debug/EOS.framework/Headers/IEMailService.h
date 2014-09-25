//
//  IEMailService.h
//  EOSFramework
//
//  Created by Sam on 6/19/13.
//
//

#import <Foundation/Foundation.h>

@protocol IEMailService <NSObject>

- (void) send: (NSDictionary *) args;

@end
