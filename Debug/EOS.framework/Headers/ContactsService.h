//
//  ContactsService.h
//  EOSFramework
//
//  Created by Sam Chang on 4/17/14.
//  Copyright (c) 2014 HP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IService.h"
#import "lua.h"
#import "LuaTableCompatible.h"
#import "AbstractUIWidget.h"
#import "AbstractLuaTableCompatible.h"
#import "LuaFunction.h"
#import "LuaFunctionWatcher.h"

@import AddressBook;

@interface ContactsService : AbstractLuaTableCompatible <IService, LuaTableCompatible>{
    ABAddressBookRef _addressBook;
}

@property (nonatomic, strong) NSMutableArray *changeWatchers;
@property (nonatomic, assign) BOOL granted;
@property (nonatomic, readonly, getter = getAll) NSArray *all;

- (LuaFunctionWatcher *) addChangeWatcher:(LuaFunction *)func;
- (ABAddressBookRef)addressBook;

- (void) load: (LuaFunction *) func;

@end
