//
//  AbstractWidget.h
//  EOSClient2
//
//  Created by Song on 10/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIWidgetM.h"
#import "PageSandbox.h"
#import "LuaObjectProxy.h"
#import "LuaObjectProxyCompatible.h"
#import "AbstractLuaTableCompatible.h"
#import "IAbstractUIWidget.h"
#import "ILuaReference.h"
#import <QuartzCore/QuartzCore.h>

#define APPLY_DIRTY_MODEL_PROP(key, dest) \
if (self.stableModel.key != self.model.key) {\
self.stableModel.key = self.model.key;\
dest = self.model.key;\
}\

#define APPLY_DIRTY_MODEL_PROP_DO(key, dest) \
if (self.stableModel.key != self.model.key && ![self.stableModel.key isEqual: self.model.key]) {\
self.stableModel.key = self.model.key;\
dest;\
}\

//NSLog(@"%s %@ => %@", #key, self.stableModel.key, self.model.key);\

#define APPLY_DIRTY_MODEL_PROP_EQ_DO(key, dest) \
if (self.stableModel.key != self.model.key) {\
self.stableModel.key = self.model.key;\
dest;\
}\

#define APPLY_DIRTY_MODEL_PROP_FLOAT_DO(key, dest) \
if (!(isnan(self.stableModel.key) && isnan(self.model.key)) && self.stableModel.key != self.model.key) {\
self.stableModel.key = self.model.key;\
dest;\
}\

@class ViewWidget;

/**This class is the base class of all Widget*/
@interface AbstractUIWidget : AbstractLuaTableCompatible <LuaObjectProxyCompatible, IAbstractUIWidget, ILuaReference>{
    UIWidgetM *attributeModel;

    NSDictionary *styleDic;
    
    UIImageView *backgroundImageView;
    CAGradientLayer *backgroundGradientLayer;
    
    CGSize lastParentContentSize;
    
    volatile BOOL layoutSuspended;
    volatile BOOL layoutDirty;
    
    BOOL created;
    
    int ref;
    
    CGRect selfRect;
    BOOL selfRectDirty;
    
    BOOL resetBeforeDataProvider;
    
    @public
    CGRect currentRect;
}

/**The Model with this `Widget`*/
@property (nonatomic, readonly) UIWidgetM *model; //dirtyModel
@property (nonatomic, readonly) UIWidgetM *stableModel;
@property (nonatomic, assign) PageSandbox *pageSandbox;

@property (nonatomic, assign) ViewWidget *parent;
@property (nonatomic, readonly, getter = getBackgroundColor) UIColor *backgroundColor;

/**initialize this class with UIWidgetM Model
 
 @param m the model of this `Widget`
 @return self
 */
- (id) initWithModel: (UIWidgetM *) m withPageSandbox: (PageSandbox *) sandbox;

/**get the UIView along with this `Widget`
 
 @return UIView to return
 */
- (UIView *) innerView;

- (void) removeFromSuperview;

- (NSUInteger) createView;

/**invoked when this widget is fully created.*/
- (void) onCreated;

- (void) onCreateView;

/**invoked when this widget is going to destory*/
- (void) onDestroy;

/**invoked when this widget is removed from ui*/
- (void) onRemoved;

/**invoked when this widget is move to front of this screen*/
- (void) onFronted;

/**invoked when this widget is move to backend of this screen*/
- (void) onBackend;

/** Tell parent what's the exactly rect of the widget, parent size should not include it's padding */
- (CGRect) measureRect: (CGSize) parentContentSize;
- (CGRect) measureSelfRect: (CGSize) parentContentSize;
- (CGSize) sizeUnionMargin: (CGSize) parentContentSize;

- (void) reloadRect;
- (void) setViewFrame: (CGRect) rect;

- (void) setDataProvider: (id) object;
- (void) setData: (NSObject *) data;

- (void) applyBackground: (UIView *) view;

- (UIColor *) getDefaultBackgroundColor;

- (UIView *) getDefaultBackground;

- (void) updateBackgroundFrame;

- (void) onResumeLayout;
- (void) onReload;

- (void) doResetBeforeDataProvider;

- (void) onHiddenChanged;

- (BOOL) isVisible;

@end
