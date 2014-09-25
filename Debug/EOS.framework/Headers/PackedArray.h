//
//  PackedArray.h
//  EOSFramework
//
//  Created by Sam Chang on 4/27/13.
//
//

#import <Foundation/Foundation.h>

@interface PackedArray : NSObject

@property (nonatomic, readonly) NSArray *array;

- (id) initWithArray: (NSArray *) value;
@end
