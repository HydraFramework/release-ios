//
//  LuaImage.h
//  EOSFramework
//
//  Created by Sam Chang on 5/12/14.
//  Copyright (c) 2014 HP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import "AbstractLuaTableCompatible.h"
#import "PackedArray.h"

#define KIND_THUMBNAIL      @"KIND_THUMBNAIL"
#define KIND_FULLSCREEN     @"KIND_FULLSCREEN"
#define KIND_FULL           @"KIND_FULL"

@interface LuaImage : AbstractLuaTableCompatible

@property (nonatomic, readonly) ALAsset *asset;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *kind;

- (instancetype) initWithALAsset: (ALAsset *) asset;
- (instancetype) initWithImage: (UIImage *) img;
- (instancetype) initWithPath: (NSString *) path;
- (instancetype) initWithALAsset: (ALAsset *) asset withKind: (NSString *) kd;

- (UIImage *) getImage;

- (LuaImage *) getThumbnail;
- (LuaImage *) getFullScreenImage;
- (LuaImage *) getFullResolutionImage;

- (NSString *) getBase64String;
- (NSData *) getPNGData;
- (NSData *) getJPEGData: (float) compress;
- (PackedArray *) getSize;
- (LuaImage *) scale: (int) width : (int) height;
- (LuaImage *) crop: (int) x : (int) y : (int) width : (int) height;
- (LuaImage *) mask: (LuaImage *) mask;

- (BOOL) save: (NSString *) path : (NSString *) format;

@end
