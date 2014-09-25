//
//  IAppManagementService.h
//  EOSFramework
//
//  Created by Sam Chang on 1/18/13.
//
//

#import <Foundation/Foundation.h>
#import "EOSList.h"
#import "AppSandbox.h"

@protocol IAppManagementService <NSObject>

- (BOOL) _COROUTINE_installFile: (NSString *) filePath : (NSString *) appId;
- (BOOL) _COROUTINE_installURL: (NSString *) urlString : (NSString *) appId;

- (void) scan;
- (BOOL) remove: (NSString *) appId;
- (BOOL) remove: (NSString *) appId :(BOOL) removeAll;

- (EOSList *) list: (NSString *) category;

- (NSString *) pathForApp: (NSString *) appId;

- (AppSandbox *) getAppSandbox: (NSString *) appId;

- (PageSandbox *) getPageSandbox: (NSString *) appId :(NSString *) pageId;
- (PageSandbox *) getPageSandbox: (NSString *) appId;

@end
