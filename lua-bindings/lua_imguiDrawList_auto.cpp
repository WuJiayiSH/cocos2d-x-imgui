#include "lua_imguiDrawList_auto.hpp"
#include "imgui_lua.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

#ifdef COCOS2D_DEBUG
#undef COCOS2D_DEBUG
#endif

int lua_x_imguiDrawList_ImDrawList_ChannelsMerge(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_ChannelsMerge'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_ChannelsMerge'", nullptr);
            return 0;
        }
        cobj->ChannelsMerge();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:ChannelsMerge",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_ChannelsMerge'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_PathRect(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathRect'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        ImVec2 arg0;
        ImVec2 arg1;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PathRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathRect'", nullptr);
            return 0;
        }
        cobj->PathRect(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        double arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PathRect");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "imgui.ImDrawList:PathRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathRect'", nullptr);
            return 0;
        }
        cobj->PathRect(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        double arg2;
        int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PathRect");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "imgui.ImDrawList:PathRect");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:PathRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathRect'", nullptr);
            return 0;
        }
        cobj->PathRect(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathRect",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathRect'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_AddTriangleFilled(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddTriangleFilled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        unsigned int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddTriangleFilled");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddTriangleFilled");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddTriangleFilled");

        ok &= luaval_to_uint32(tolua_S, 5,&arg3, "imgui.ImDrawList:AddTriangleFilled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddTriangleFilled'", nullptr);
            return 0;
        }
        cobj->AddTriangleFilled(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddTriangleFilled",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddTriangleFilled'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_PathFillConvex(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathFillConvex'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImDrawList:PathFillConvex");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathFillConvex'", nullptr);
            return 0;
        }
        cobj->PathFillConvex(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathFillConvex",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathFillConvex'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_CloneOutput(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_CloneOutput'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_CloneOutput'", nullptr);
            return 0;
        }
        ImDrawList* ret = cobj->CloneOutput();
        object_to_luaval<ImDrawList>(tolua_S, "imgui.ImDrawList",(ImDrawList*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:CloneOutput",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_CloneOutput'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_AddLine(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddLine'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddLine");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddLine");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddLine");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddLine'", nullptr);
            return 0;
        }
        cobj->AddLine(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        double arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddLine");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddLine");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddLine");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:AddLine");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddLine'", nullptr);
            return 0;
        }
        cobj->AddLine(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddLine",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddLine'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_ChannelsSplit(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_ChannelsSplit'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImDrawList:ChannelsSplit");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_ChannelsSplit'", nullptr);
            return 0;
        }
        cobj->ChannelsSplit(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:ChannelsSplit",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_ChannelsSplit'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_PopClipRect(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PopClipRect'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PopClipRect'", nullptr);
            return 0;
        }
        cobj->PopClipRect();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PopClipRect",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PopClipRect'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_PushClipRect(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PushClipRect'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        ImVec2 arg0;
        ImVec2 arg1;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PushClipRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PushClipRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PushClipRect'", nullptr);
            return 0;
        }
        cobj->PushClipRect(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        bool arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PushClipRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PushClipRect");

        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "imgui.ImDrawList:PushClipRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PushClipRect'", nullptr);
            return 0;
        }
        cobj->PushClipRect(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PushClipRect",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PushClipRect'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_AddTriangle(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddTriangle'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        unsigned int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_uint32(tolua_S, 5,&arg3, "imgui.ImDrawList:AddTriangle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddTriangle'", nullptr);
            return 0;
        }
        cobj->AddTriangle(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        unsigned int arg3;
        double arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_uint32(tolua_S, 5,&arg3, "imgui.ImDrawList:AddTriangle");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "imgui.ImDrawList:AddTriangle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddTriangle'", nullptr);
            return 0;
        }
        cobj->AddTriangle(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddTriangle",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddTriangle'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_PathArcToFast(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathArcToFast'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        ImVec2 arg0;
        double arg1;
        int arg2;
        int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathArcToFast");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:PathArcToFast");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "imgui.ImDrawList:PathArcToFast");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:PathArcToFast");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathArcToFast'", nullptr);
            return 0;
        }
        cobj->PathArcToFast(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathArcToFast",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathArcToFast'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_AddRect(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddRect'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRect'", nullptr);
            return 0;
        }
        cobj->AddRect(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        double arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:AddRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRect'", nullptr);
            return 0;
        }
        cobj->AddRect(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        double arg3;
        int arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "imgui.ImDrawList:AddRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRect'", nullptr);
            return 0;
        }
        cobj->AddRect(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 6) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        double arg3;
        int arg4;
        double arg5;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "imgui.ImDrawList:AddRect");

        ok &= luaval_to_number(tolua_S, 7,&arg5, "imgui.ImDrawList:AddRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRect'", nullptr);
            return 0;
        }
        cobj->AddRect(arg0, arg1, arg2, arg3, arg4, arg5);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddRect",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddRect'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_PathArcTo(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathArcTo'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        ImVec2 arg0;
        double arg1;
        double arg2;
        double arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:PathArcTo");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathArcTo'", nullptr);
            return 0;
        }
        cobj->PathArcTo(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5) 
    {
        ImVec2 arg0;
        double arg1;
        double arg2;
        double arg3;
        int arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:PathArcTo");

        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "imgui.ImDrawList:PathArcTo");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathArcTo'", nullptr);
            return 0;
        }
        cobj->PathArcTo(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathArcTo",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathArcTo'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_AddQuad(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddQuad'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 5) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        ImVec2 arg3;
        unsigned int arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImDrawList:AddQuad");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddQuad'", nullptr);
            return 0;
        }
        cobj->AddQuad(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 6) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        ImVec2 arg3;
        unsigned int arg4;
        double arg5;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImDrawList:AddQuad");

        ok &= luaval_to_number(tolua_S, 7,&arg5, "imgui.ImDrawList:AddQuad");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddQuad'", nullptr);
            return 0;
        }
        cobj->AddQuad(arg0, arg1, arg2, arg3, arg4, arg5);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddQuad",argc, 5);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddQuad'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_AddRectFilledMultiColor(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilledMultiColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 6) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        unsigned int arg3;
        unsigned int arg4;
        unsigned int arg5;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRectFilledMultiColor");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRectFilledMultiColor");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRectFilledMultiColor");

        ok &= luaval_to_uint32(tolua_S, 5,&arg3, "imgui.ImDrawList:AddRectFilledMultiColor");

        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImDrawList:AddRectFilledMultiColor");

        ok &= luaval_to_uint32(tolua_S, 7,&arg5, "imgui.ImDrawList:AddRectFilledMultiColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilledMultiColor'", nullptr);
            return 0;
        }
        cobj->AddRectFilledMultiColor(arg0, arg1, arg2, arg3, arg4, arg5);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddRectFilledMultiColor",argc, 6);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilledMultiColor'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_AddQuadFilled(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddQuadFilled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 5) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        ImVec2 arg3;
        unsigned int arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddQuadFilled");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddQuadFilled");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddQuadFilled");

        ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, "imgui.ImDrawList:AddQuadFilled");

        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImDrawList:AddQuadFilled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddQuadFilled'", nullptr);
            return 0;
        }
        cobj->AddQuadFilled(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddQuadFilled",argc, 5);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddQuadFilled'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_AddCircleFilled(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddCircleFilled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        double arg1;
        unsigned int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddCircleFilled");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:AddCircleFilled");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddCircleFilled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddCircleFilled'", nullptr);
            return 0;
        }
        cobj->AddCircleFilled(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        double arg1;
        unsigned int arg2;
        int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddCircleFilled");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:AddCircleFilled");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddCircleFilled");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:AddCircleFilled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddCircleFilled'", nullptr);
            return 0;
        }
        cobj->AddCircleFilled(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddCircleFilled",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddCircleFilled'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_PathBezierCurveTo(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathBezierCurveTo'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathBezierCurveTo");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PathBezierCurveTo");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:PathBezierCurveTo");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathBezierCurveTo'", nullptr);
            return 0;
        }
        cobj->PathBezierCurveTo(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathBezierCurveTo");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:PathBezierCurveTo");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:PathBezierCurveTo");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:PathBezierCurveTo");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathBezierCurveTo'", nullptr);
            return 0;
        }
        cobj->PathBezierCurveTo(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathBezierCurveTo",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathBezierCurveTo'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_GetClipRectMax(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_GetClipRectMax'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_GetClipRectMax'", nullptr);
            return 0;
        }
        ImVec2 ret = cobj->GetClipRectMax();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:GetClipRectMax",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_GetClipRectMax'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_AddDrawCmd(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddDrawCmd'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddDrawCmd'", nullptr);
            return 0;
        }
        cobj->AddDrawCmd();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddDrawCmd",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddDrawCmd'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_PathClear(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathClear'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathClear'", nullptr);
            return 0;
        }
        cobj->PathClear();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathClear",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathClear'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_PushClipRectFullScreen(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PushClipRectFullScreen'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PushClipRectFullScreen'", nullptr);
            return 0;
        }
        cobj->PushClipRectFullScreen();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PushClipRectFullScreen",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PushClipRectFullScreen'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_ChannelsSetCurrent(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_ChannelsSetCurrent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImDrawList:ChannelsSetCurrent");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_ChannelsSetCurrent'", nullptr);
            return 0;
        }
        cobj->ChannelsSetCurrent(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:ChannelsSetCurrent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_ChannelsSetCurrent'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_AddCircle(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddCircle'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        double arg1;
        unsigned int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddCircle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddCircle'", nullptr);
            return 0;
        }
        cobj->AddCircle(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        double arg1;
        unsigned int arg2;
        int arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:AddCircle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddCircle'", nullptr);
            return 0;
        }
        cobj->AddCircle(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5) 
    {
        ImVec2 arg0;
        double arg1;
        unsigned int arg2;
        int arg3;
        double arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "imgui.ImDrawList:AddCircle");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "imgui.ImDrawList:AddCircle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddCircle'", nullptr);
            return 0;
        }
        cobj->AddCircle(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddCircle",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddCircle'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_GetClipRectMin(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_GetClipRectMin'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_GetClipRectMin'", nullptr);
            return 0;
        }
        ImVec2 ret = cobj->GetClipRectMin();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:GetClipRectMin",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_GetClipRectMin'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_PopTextureID(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PopTextureID'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PopTextureID'", nullptr);
            return 0;
        }
        cobj->PopTextureID();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PopTextureID",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PopTextureID'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_PathLineTo(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathLineTo'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ImVec2 arg0;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathLineTo");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathLineTo'", nullptr);
            return 0;
        }
        cobj->PathLineTo(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathLineTo",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathLineTo'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_PathStroke(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathStroke'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        unsigned int arg0;
        bool arg1;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImDrawList:PathStroke");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ImDrawList:PathStroke");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathStroke'", nullptr);
            return 0;
        }
        cobj->PathStroke(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        unsigned int arg0;
        bool arg1;
        double arg2;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImDrawList:PathStroke");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "imgui.ImDrawList:PathStroke");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "imgui.ImDrawList:PathStroke");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathStroke'", nullptr);
            return 0;
        }
        cobj->PathStroke(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathStroke",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathStroke'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_AddBezierCurve(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddBezierCurve'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 6) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        ImVec2 arg3;
        unsigned int arg4;
        double arg5;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddBezierCurve");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddBezierCurve");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddBezierCurve");

        ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, "imgui.ImDrawList:AddBezierCurve");

        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImDrawList:AddBezierCurve");

        ok &= luaval_to_number(tolua_S, 7,&arg5, "imgui.ImDrawList:AddBezierCurve");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddBezierCurve'", nullptr);
            return 0;
        }
        cobj->AddBezierCurve(arg0, arg1, arg2, arg3, arg4, arg5);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 7) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        ImVec2 arg2;
        ImVec2 arg3;
        unsigned int arg4;
        double arg5;
        int arg6;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddBezierCurve");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddBezierCurve");

        ok &= luaval_to_ImVec2(tolua_S, 4, &arg2, "imgui.ImDrawList:AddBezierCurve");

        ok &= luaval_to_ImVec2(tolua_S, 5, &arg3, "imgui.ImDrawList:AddBezierCurve");

        ok &= luaval_to_uint32(tolua_S, 6,&arg4, "imgui.ImDrawList:AddBezierCurve");

        ok &= luaval_to_number(tolua_S, 7,&arg5, "imgui.ImDrawList:AddBezierCurve");

        ok &= luaval_to_int32(tolua_S, 8,(int *)&arg6, "imgui.ImDrawList:AddBezierCurve");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddBezierCurve'", nullptr);
            return 0;
        }
        cobj->AddBezierCurve(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddBezierCurve",argc, 6);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddBezierCurve'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_PathLineToMergeDuplicate(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_PathLineToMergeDuplicate'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ImVec2 arg0;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:PathLineToMergeDuplicate");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_PathLineToMergeDuplicate'", nullptr);
            return 0;
        }
        cobj->PathLineToMergeDuplicate(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:PathLineToMergeDuplicate",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_PathLineToMergeDuplicate'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_AddRectFilled(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRectFilled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilled'", nullptr);
            return 0;
        }
        cobj->AddRectFilled(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        double arg3;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:AddRectFilled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilled'", nullptr);
            return 0;
        }
        cobj->AddRectFilled(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 5) 
    {
        ImVec2 arg0;
        ImVec2 arg1;
        unsigned int arg2;
        double arg3;
        int arg4;

        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_ImVec2(tolua_S, 3, &arg1, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "imgui.ImDrawList:AddRectFilled");

        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "imgui.ImDrawList:AddRectFilled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilled'", nullptr);
            return 0;
        }
        cobj->AddRectFilled(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:AddRectFilled",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_AddRectFilled'.",&tolua_err);
#endif

    return 0;
}
int lua_x_imguiDrawList_ImDrawList_getFlags(lua_State* tolua_S)
{
    ImDrawList* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_getFlags'", nullptr);
        return 0;
    }
#endif

    tolua_pushnumber(tolua_S,(lua_Number)cobj->Flags);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_getFlags'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_setFlags(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_setFlags'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImDrawList:Flags");
        cobj->Flags = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:Flags",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_getFlags'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_get_OwnerName(lua_State* tolua_S)
{
    ImDrawList* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif
    
    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_get_OwnerName'", nullptr);
        return 0;
    }
#endif

    tolua_pushstring(tolua_S,(const char*)cobj->_OwnerName);

    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_get_OwnerName'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiDrawList_ImDrawList_set_OwnerName(lua_State* tolua_S)
{
    int argc = 0;
    ImDrawList* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImDrawList",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ImDrawList*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiDrawList_ImDrawList_set_OwnerName'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;

    if (1 == argc)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "imgui.ImDrawList:_OwnerName"); arg0 = arg0_tmp.c_str();
        cobj->_OwnerName = arg0;
        return 0;
    }

    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImDrawList:_OwnerName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiDrawList_ImDrawList_get_OwnerName'.",&tolua_err);
    return 0;
#endif
}
static int lua_x_imguiDrawList_ImDrawList_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImDrawList)");
    return 0;
}

int lua_register_x_imguiDrawList_ImDrawList(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"imgui.ImDrawList");
    tolua_cclass(tolua_S,"ImDrawList","imgui.ImDrawList","",nullptr);

    tolua_beginmodule(tolua_S,"ImDrawList");
        tolua_function(tolua_S,"channelsMerge",lua_x_imguiDrawList_ImDrawList_ChannelsMerge);
        tolua_function(tolua_S,"pathRect",lua_x_imguiDrawList_ImDrawList_PathRect);
        tolua_function(tolua_S,"addTriangleFilled",lua_x_imguiDrawList_ImDrawList_AddTriangleFilled);
        tolua_function(tolua_S,"pathFillConvex",lua_x_imguiDrawList_ImDrawList_PathFillConvex);
        tolua_function(tolua_S,"cloneOutput",lua_x_imguiDrawList_ImDrawList_CloneOutput);
        tolua_function(tolua_S,"addLine",lua_x_imguiDrawList_ImDrawList_AddLine);
        tolua_function(tolua_S,"channelsSplit",lua_x_imguiDrawList_ImDrawList_ChannelsSplit);
        tolua_function(tolua_S,"popClipRect",lua_x_imguiDrawList_ImDrawList_PopClipRect);
        tolua_function(tolua_S,"pushClipRect",lua_x_imguiDrawList_ImDrawList_PushClipRect);
        tolua_function(tolua_S,"addTriangle",lua_x_imguiDrawList_ImDrawList_AddTriangle);
        tolua_function(tolua_S,"pathArcToFast",lua_x_imguiDrawList_ImDrawList_PathArcToFast);
        tolua_function(tolua_S,"addRect",lua_x_imguiDrawList_ImDrawList_AddRect);
        tolua_function(tolua_S,"pathArcTo",lua_x_imguiDrawList_ImDrawList_PathArcTo);
        tolua_function(tolua_S,"addQuad",lua_x_imguiDrawList_ImDrawList_AddQuad);
        tolua_function(tolua_S,"addRectFilledMultiColor",lua_x_imguiDrawList_ImDrawList_AddRectFilledMultiColor);
        tolua_function(tolua_S,"addQuadFilled",lua_x_imguiDrawList_ImDrawList_AddQuadFilled);
        tolua_function(tolua_S,"addCircleFilled",lua_x_imguiDrawList_ImDrawList_AddCircleFilled);
        tolua_function(tolua_S,"pathBezierCurveTo",lua_x_imguiDrawList_ImDrawList_PathBezierCurveTo);
        tolua_function(tolua_S,"getClipRectMax",lua_x_imguiDrawList_ImDrawList_GetClipRectMax);
        tolua_function(tolua_S,"addDrawCmd",lua_x_imguiDrawList_ImDrawList_AddDrawCmd);
        tolua_function(tolua_S,"pathClear",lua_x_imguiDrawList_ImDrawList_PathClear);
        tolua_function(tolua_S,"pushClipRectFullScreen",lua_x_imguiDrawList_ImDrawList_PushClipRectFullScreen);
        tolua_function(tolua_S,"channelsSetCurrent",lua_x_imguiDrawList_ImDrawList_ChannelsSetCurrent);
        tolua_function(tolua_S,"addCircle",lua_x_imguiDrawList_ImDrawList_AddCircle);
        tolua_function(tolua_S,"getClipRectMin",lua_x_imguiDrawList_ImDrawList_GetClipRectMin);
        tolua_function(tolua_S,"popTextureID",lua_x_imguiDrawList_ImDrawList_PopTextureID);
        tolua_function(tolua_S,"pathLineTo",lua_x_imguiDrawList_ImDrawList_PathLineTo);
        tolua_function(tolua_S,"pathStroke",lua_x_imguiDrawList_ImDrawList_PathStroke);
        tolua_function(tolua_S,"addBezierCurve",lua_x_imguiDrawList_ImDrawList_AddBezierCurve);
        tolua_function(tolua_S,"pathLineToMergeDuplicate",lua_x_imguiDrawList_ImDrawList_PathLineToMergeDuplicate);
        tolua_function(tolua_S,"addRectFilled",lua_x_imguiDrawList_ImDrawList_AddRectFilled);
        tolua_variable(tolua_S,"Flags", lua_x_imguiDrawList_ImDrawList_getFlags, lua_x_imguiDrawList_ImDrawList_setFlags);
        tolua_variable(tolua_S,"_OwnerName", lua_x_imguiDrawList_ImDrawList_get_OwnerName, lua_x_imguiDrawList_ImDrawList_set_OwnerName);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(ImDrawList).name();
    g_luaType[typeName] = "imgui.ImDrawList";
    g_typeCast["ImDrawList"] = "imgui.ImDrawList";
    return 1;
}
TOLUA_API int register_all_x_imguiDrawList(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"imgui",0);
	tolua_beginmodule(tolua_S,"imgui");

	lua_register_x_imguiDrawList_ImDrawList(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

