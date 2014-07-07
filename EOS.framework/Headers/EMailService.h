//
//  EMailService.h
//  EOSFramework
//
//  Created by Sam on 6/19/13.
//
//

#import <Foundation/Foundation.h>
#import "IService.h"
#import "AbstractLuaTableCompatible.h"
#import <MessageUI/MessageUI.h>

@interface EMailService : AbstractLuaTableCompatible <IService, MFMailComposeViewControllerDelegate>

@end
