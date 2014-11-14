//
//  luathreadtable.h
//  QBaiSpider
//
//  Created by Sam Chang on 1/3/13.
//  Copyright (c) 2013 Sam Chang. All rights reserved.
//

#ifndef QBaiSpider_luathreadtable_h
#define QBaiSpider_luathreadtable_h

#include "lua.h"

void luathread_table_bind(lua_State *co, lua_State *L, int idx);

void luathread_table_unbind(lua_State *co);

#endif
