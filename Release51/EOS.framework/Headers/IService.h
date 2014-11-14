//
//  IService.h
//  EOSFramework
//
//  Created by Sam Chang on 1/11/13.
//
//

#import <Foundation/Foundation.h>

@protocol IService <NSObject>

- (BOOL) singleton;

@optional
- (void) onLoad;

@end
