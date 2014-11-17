//
//  LuaHelper.h
//  osFramework
//
//  Created by Song on 6/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdvancedTakePhoto.h"
#import "AppContext.h"

#define CONFIRM_OK      1
#define CONFIRM_CANCEL  0

@class PageSandbox, AppSandbox, LuaImage;

@interface LuaHelper : NSObject <UIAlertViewDelegate, UIActionSheetDelegate, LuaTableCompatible> {
    BOOL previewingPhoto;
    BOOL isPreviewDone;
    
    NSDateFormatter *formatter;
    AdvancedTakePhoto *takePhoto;
    
    lua_State *L;
}

//@property (nonatomic, assign) PageSandbox *pageSandbox;
//@property (nonatomic, assign) AppSandbox *appSandbox;

- (NSString *) dump: (NSObject *) object;

- (void) switchApp: (AppContext *) context;
- (void) switchPage: (AppContext *) context;
- (void) pushApp: (AppContext *) context;
//- (void) pushPage: (NSString *) pageId withAppId: (NSString *) appId;
//- (void) pushPage: (NSString *) pageId withAppId: (NSString *) appId withUseCurrentStack: (BOOL) useCurrentStack;
- (void) popPage: (AppContext *) context;
- (void) popApp: (AppContext *) context;
- (void) pushController: (AppContext *) context;
//- (void) pushController: (NSString *) name : (NSObject *) param;
//- (void) presentModal: (NSDictionary *) dic;
//- (void) dismissModal;

- (void) _COROUTINE_startBusy: (NSString *) ycenter withTitle: (NSString *) title;
- (void) _COROUTINE_stopBusy;

- (NSString *) urlencode: (NSString *) str;
- (NSString *) urldecode: (NSString *) str;

- (BOOL) _COROUTINE_installApp: (NSString *) urlString withAppId: (NSString *) appId withExistVersion: (NSString *) existVersion;

- (BOOL) removeApp: (NSString *) appId;

- (NSInteger) compareVersion: (NSString *) version1 withVersion: (NSString *) version2;

- (void) registerPush;

- (BOOL) phonecall: (NSString *) num;

- (BOOL) phonesms: (NSString *) num;

- (NSString *) load: (NSString *) key scope: (NSString *) scope;

- (BOOL) save: (NSString *) key value: (NSObject *) value scope: (NSString *) scope timeout: (NSTimeInterval) sec;

- (BOOL) save: (NSString *) key value: (NSObject *) value scope: (NSString *) scope;

- (NSString *) unzip: (NSString *) urlString toPath: (NSString *) path withOutCache: (BOOL) withOutCache;

- (NSString *) download: (NSString *) urlString toPath: (NSString *) path;

- (NSString *) md5String: (NSString *) input;

- (BOOL) navigateURL: (NSString *) urlString;

- (NSNumber *) isWLAN;

- (void) exit: (int) num;

- (void) advancedTakePhoto:(NSDictionary *)option;

- (void) takePhoto:(NSDictionary *)option;

- (void) setScreenAutoRotation: (int) value;

- (int) getScreenAutoRotation;

@end
