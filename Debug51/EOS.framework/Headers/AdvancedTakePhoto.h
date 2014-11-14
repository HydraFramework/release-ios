//
//  AdvancedTakePhoto.h
//  EOSFramework
//
//  Created by JimFu on 12-4-18.
//  Copyright (c) 2014年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ImageProcessController.h"
#import "LuaImage.h"

@class PageSandbox;

@class AdvancedTakePhoto;

@protocol AdvancedTakePhotoDelegate

- (void) didAdvancedTakePhotoFinished: (AdvancedTakePhoto *) atp withImage: (UIImage *) image;
- (void) didAdvancedTakePhotoCanceled: (AdvancedTakePhoto *) atp;

@end

@interface AdvancedTakePhoto : NSObject <UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    NSMutableArray *takePhotoActions;
}

@property (nonatomic, assign) PageSandbox *pageSandbox;
@property (nonatomic, assign) id<AdvancedTakePhotoDelegate> processDelegate;
@property (nonatomic, readonly) NSDictionary *option;

- (void) takePhoto;
- (id)initWithOption:(NSDictionary *)dic;

@end
