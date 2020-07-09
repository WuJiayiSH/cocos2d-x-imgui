#include "lua_imguiViewport_auto.hpp"
#include "imgui_lua.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

#ifdef COCOS2D_DEBUG
#undef COCOS2D_DEBUG
#endif
namespace imgui
{
    using ImGuiViewport = ImGuiViewport;
}

int lua_x_imguiViewport_ImGuiViewport_GetCenter(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiViewport",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_GetCenter'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport_GetCenter'", nullptr);
            return 0;
        }
        ImVec2 ret = cobj->GetCenter();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:GetCenter", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiViewport_ImGuiViewport_GetCenter'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_GetWorkPos(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiViewport",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_GetWorkPos'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport_GetWorkPos'", nullptr);
            return 0;
        }
        ImVec2 ret = cobj->GetWorkPos();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:GetWorkPos", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiViewport_ImGuiViewport_GetWorkPos'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_GetWorkSize(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S,1,"imgui.ImGuiViewport",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, nullptr);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_GetWorkSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport_GetWorkSize'", nullptr);
            return 0;
        }
        ImVec2 ret = cobj->GetWorkSize();
        ImVec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:GetWorkSize", argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_x_imguiViewport_ImGuiViewport_GetWorkSize'.",&tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_getID(lua_State* tolua_S)
{
    imgui::ImGuiViewport* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_getID'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->ID);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getID'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_setID(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_setID'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImGuiViewport:ID");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport'", nullptr);
            return 0;
        }
        cobj->ID = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:ID", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getID'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_getFlags(lua_State* tolua_S)
{
    imgui::ImGuiViewport* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_getFlags'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->Flags);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getFlags'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_setFlags(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_setFlags'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "imgui.ImGuiViewport:Flags");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport'", nullptr);
            return 0;
        }
        cobj->Flags = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:Flags", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getFlags'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_getPos(lua_State* tolua_S)
{
    imgui::ImGuiViewport* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_getPos'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->Pos);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getPos'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_setPos(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_setPos'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiViewport:Pos");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport'", nullptr);
            return 0;
        }
        cobj->Pos = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:Pos", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getPos'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_getSize(lua_State* tolua_S)
{
    imgui::ImGuiViewport* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_getSize'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->Size);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_setSize(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_setSize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiViewport:Size");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport'", nullptr);
            return 0;
        }
        cobj->Size = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:Size", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getSize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_getWorkOffsetMin(lua_State* tolua_S)
{
    imgui::ImGuiViewport* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_getWorkOffsetMin'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->WorkOffsetMin);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getWorkOffsetMin'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_setWorkOffsetMin(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_setWorkOffsetMin'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiViewport:WorkOffsetMin");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport'", nullptr);
            return 0;
        }
        cobj->WorkOffsetMin = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:WorkOffsetMin", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getWorkOffsetMin'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_getWorkOffsetMax(lua_State* tolua_S)
{
    imgui::ImGuiViewport* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_getWorkOffsetMax'", nullptr);
        return 0;
    }
#endif
    ImVec2_to_luaval(tolua_S, cobj->WorkOffsetMax);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getWorkOffsetMax'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_setWorkOffsetMax(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_setWorkOffsetMax'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        ImVec2 arg0;
        ok &= luaval_to_ImVec2(tolua_S, 2, &arg0, "imgui.ImGuiViewport:WorkOffsetMax");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport'", nullptr);
            return 0;
        }
        cobj->WorkOffsetMax = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:WorkOffsetMax", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getWorkOffsetMax'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_getDpiScale(lua_State* tolua_S)
{
    imgui::ImGuiViewport* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_getDpiScale'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->DpiScale);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getDpiScale'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_setDpiScale(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_setDpiScale'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0, "imgui.ImGuiViewport:DpiScale");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport'", nullptr);
            return 0;
        }
        cobj->DpiScale = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:DpiScale", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getDpiScale'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_getParentViewportId(lua_State* tolua_S)
{
    imgui::ImGuiViewport* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_getParentViewportId'", nullptr);
        return 0;
    }
#endif
    tolua_pushnumber(tolua_S,(lua_Number)cobj->ParentViewportId);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getParentViewportId'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_setParentViewportId(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_setParentViewportId'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "imgui.ImGuiViewport:ParentViewportId");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport'", nullptr);
            return 0;
        }
        cobj->ParentViewportId = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:ParentViewportId", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getParentViewportId'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_getPlatformRequestClose(lua_State* tolua_S)
{
    imgui::ImGuiViewport* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_getPlatformRequestClose'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->PlatformRequestClose);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getPlatformRequestClose'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_setPlatformRequestClose(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_setPlatformRequestClose'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiViewport:PlatformRequestClose");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport'", nullptr);
            return 0;
        }
        cobj->PlatformRequestClose = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:PlatformRequestClose", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getPlatformRequestClose'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_getPlatformRequestMove(lua_State* tolua_S)
{
    imgui::ImGuiViewport* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_getPlatformRequestMove'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->PlatformRequestMove);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getPlatformRequestMove'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_setPlatformRequestMove(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_setPlatformRequestMove'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiViewport:PlatformRequestMove");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport'", nullptr);
            return 0;
        }
        cobj->PlatformRequestMove = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:PlatformRequestMove", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getPlatformRequestMove'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_getPlatformRequestResize(lua_State* tolua_S)
{
    imgui::ImGuiViewport* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S, "invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_getPlatformRequestResize'", nullptr);
        return 0;
    }
#endif
    tolua_pushboolean(tolua_S,(bool)cobj->PlatformRequestResize);
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getPlatformRequestResize'.", &tolua_err);
    return 0;
#endif
}
int lua_x_imguiViewport_ImGuiViewport_setPlatformRequestResize(lua_State* tolua_S)
{
    int argc = 0;
    imgui::ImGuiViewport* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(tolua_S, 1, "imgui.ImGuiViewport", 0, &tolua_err)) goto tolua_lerror;
#endif
    cobj = (imgui::ImGuiViewport*)tolua_tousertype(tolua_S, 1, 0);
#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_x_imguiViewport_ImGuiViewport_setPlatformRequestResize'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S) - 1;
    if (1 == argc)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "imgui.ImGuiViewport:PlatformRequestResize");
        if(!ok)
        {
            tolua_error(tolua_S, "invalid arguments in function 'lua_x_imguiViewport_ImGuiViewport'", nullptr);
            return 0;
        }
        cobj->PlatformRequestResize = arg0;
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "imgui.ImGuiViewport:PlatformRequestResize", argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S, "#ferror in function 'lua_x_imguiViewport_ImGuiViewport_getPlatformRequestResize'.", &tolua_err);
    return 0;
#endif
}
static int lua_x_imguiViewport_ImGuiViewport_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImGuiViewport)");
    return 0;
}

int lua_register_x_imguiViewport_ImGuiViewport(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"imgui.ImGuiViewport");
    tolua_cclass(tolua_S,"ImGuiViewport","imgui.ImGuiViewport","",nullptr);

    tolua_beginmodule(tolua_S,"ImGuiViewport");
        tolua_function(tolua_S,"getWorkSize",lua_x_imguiViewport_ImGuiViewport_GetWorkSize);
        tolua_function(tolua_S,"getWorkPos",lua_x_imguiViewport_ImGuiViewport_GetWorkPos);
        tolua_function(tolua_S,"getCenter",lua_x_imguiViewport_ImGuiViewport_GetCenter);
        tolua_variable(tolua_S,"ID", lua_x_imguiViewport_ImGuiViewport_getID, lua_x_imguiViewport_ImGuiViewport_setID);
        tolua_variable(tolua_S,"Flags", lua_x_imguiViewport_ImGuiViewport_getFlags, lua_x_imguiViewport_ImGuiViewport_setFlags);
        tolua_variable(tolua_S,"Pos", lua_x_imguiViewport_ImGuiViewport_getPos, lua_x_imguiViewport_ImGuiViewport_setPos);
        tolua_variable(tolua_S,"Size", lua_x_imguiViewport_ImGuiViewport_getSize, lua_x_imguiViewport_ImGuiViewport_setSize);
        tolua_variable(tolua_S,"WorkOffsetMin", lua_x_imguiViewport_ImGuiViewport_getWorkOffsetMin, lua_x_imguiViewport_ImGuiViewport_setWorkOffsetMin);
        tolua_variable(tolua_S,"WorkOffsetMax", lua_x_imguiViewport_ImGuiViewport_getWorkOffsetMax, lua_x_imguiViewport_ImGuiViewport_setWorkOffsetMax);
        tolua_variable(tolua_S,"DpiScale", lua_x_imguiViewport_ImGuiViewport_getDpiScale, lua_x_imguiViewport_ImGuiViewport_setDpiScale);
        tolua_variable(tolua_S,"ParentViewportId", lua_x_imguiViewport_ImGuiViewport_getParentViewportId, lua_x_imguiViewport_ImGuiViewport_setParentViewportId);
        tolua_variable(tolua_S,"PlatformRequestClose", lua_x_imguiViewport_ImGuiViewport_getPlatformRequestClose, lua_x_imguiViewport_ImGuiViewport_setPlatformRequestClose);
        tolua_variable(tolua_S,"PlatformRequestMove", lua_x_imguiViewport_ImGuiViewport_getPlatformRequestMove, lua_x_imguiViewport_ImGuiViewport_setPlatformRequestMove);
        tolua_variable(tolua_S,"PlatformRequestResize", lua_x_imguiViewport_ImGuiViewport_getPlatformRequestResize, lua_x_imguiViewport_ImGuiViewport_setPlatformRequestResize);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(imgui::ImGuiViewport).name();
    g_luaType[typeName] = "imgui.ImGuiViewport";
    g_typeCast["ImGuiViewport"] = "imgui.ImGuiViewport";
    return 1;
}
TOLUA_API int register_all_x_imguiViewport(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, "imgui", 0);
	tolua_beginmodule(tolua_S, "imgui");

	lua_register_x_imguiViewport_ImGuiViewport(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

