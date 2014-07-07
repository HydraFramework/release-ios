//
//  VideoWidget.h
//  BookShelf
//
//  Created by Sam Chang on 1/26/14.
//  Copyright (c) 2014 Jian-Guo Hu. All rights reserved.
//

#import "AbstractUIWidget.h"
#import <MediaPlayer/MediaPlayer.h>
#import "VideoM.h"
#import "IVideoWidget.h"

@interface VideoWidget : AbstractUIWidget <IVideoWidget>

@property (nonatomic, strong) MPMoviePlayerController *moviePlayerController;
@property (nonatomic, strong) UIView *view;

@property (nonatomic, readonly) VideoM *model;
@property (nonatomic, readonly) VideoM *stableModel;

@end
