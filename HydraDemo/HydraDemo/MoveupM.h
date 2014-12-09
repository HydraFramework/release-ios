//
//  MoveupM.h
//  HydraDemo
//
//  Created by Sam Chang on 8/6/14.
//  Copyright (c) 2014 Sam Chang. All rights reserved.
//

#import <EOS/ViewM.h>

@interface MoveupM : ViewM

@property (nonatomic, strong) UIWidgetM *header;
@property (nonatomic, assign) NSInteger headerHeight;
@property (nonatomic, assign) NSInteger headerKeep;
@property (nonatomic, strong) LuaFunction* willchange;

@end
