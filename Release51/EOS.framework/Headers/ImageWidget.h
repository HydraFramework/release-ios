//
//  ImageWidget.h
//  EOSClient2
//
//  Created by Song on 10/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractUIWidget.h"
#import "IImageWidget.h"
#import "ImageM.h"

/**The Image Widget*/
@interface ImageWidget : AbstractUIWidget <IImageWidget>{
    UIImageView *imageView;
    UIView *view;
}

@property (nonatomic, readonly) ImageM *model;
@property (nonatomic, readonly) ImageM *stableModel;

- (void) setImage: (UIImage *) img;
- (UIImage *) getImage;
@end
