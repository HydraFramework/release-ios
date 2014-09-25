//
//  utlua.h
//  QBaiSpider
//
//  Created by Sam Chang on 1/5/13.
//  Copyright (c) 2013 Sam Chang. All rights reserved.
//

#ifndef QBaiSpider_utlua_h
#define QBaiSpider_utlua_h

#include "lua.h"

lua_State* utlua_open_state();
lua_State* utlua_newthread(lua_State *L);
int utlua_resume(lua_State *co, lua_State *from, int count);

#endif
