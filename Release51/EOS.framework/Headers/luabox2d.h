//
//  luabox2d.h
//  EOSFramework
//
//  Created by Sam Chang on 5/30/14.
//  Copyright (c) 2014 HP. All rights reserved.
//

#ifndef __EOSFramework__luabox2d__
#define __EOSFramework__luabox2d__

#ifdef  __cplusplus
extern "C" {
#endif

    #include "lua.h"
    LUALIB_API int luaopen_box2d(lua_State *L);

#ifdef  __cplusplus
}
#endif

#endif /* defined(__EOSFramework__luabox2d__) */
