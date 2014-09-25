//
//  DocumentPreviewService.h
//  EOSFramework
//
//  Created by Sam Chang on 3/20/13.
//
//

#import <UIKit/UIKit.h>
#import "AbstractLuaTableCompatible.h"
#import "IService.h"
#import "LuaObjectProxyCompatible.h"
#import "IDocumentPreviewService.h"
#import <QuickLook/QuickLook.h>

@interface DocumentPreviewService : AbstractLuaTableCompatible <IService, LuaObjectProxyCompatible, IDocumentPreviewService, QLPreviewControllerDataSource>{
}

@property (nonatomic, strong) NSArray *previewItems;

@end
