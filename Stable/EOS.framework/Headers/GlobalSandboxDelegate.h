//
//  GlobalSandboxDelegate.h
//  EOSFramework
//
//  Created by Sam Chang on 14-8-5.
//  Copyright (c) 2014年 HP. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AppSandbox;
@class PageSandbox;
@protocol PagePanel;

@protocol GlobalSandboxDelegate <NSObject>

- (void) onAppSandboxCreated: (AppSandbox *) sandbox;

- (void) onPageSandboxCreated: (PageSandbox *) sandbox;

- (void) onPagePanelCreated: (id<PagePanel>) pagepanel;

@end
