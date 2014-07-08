module(..., package.seeall)

function switch(appId, animation)
return helper:switchApp_withAnimation_(appId, animation)
end

function switchPage(pageId, animation)
return helper:switchPage(pageId, animation)
end

function push(appId, pageId, useCurrentStack)
    if not useCurrentStack then
        useCurrentStack = false
    end
    return helper:pushPage_withAppId_withUseCurrentStack_(pageId,appId,useCurrentStack)
end

function pushView(model)
    helper:pushView(model)
end

function reloadPage()
    return helper:reloadPage()
end

function pushNative(name, param)
    return helper:pushController_withParam_(name, param)
end

function removeOld(appId)
    print("removeOld -- do nothing!")
end

function pop(toAppId)
    if not toAppId then
        toAppId = nil
    end
    return helper:popApp(toAppId)
end

function popPage(arg)
    if type(arg) == "boolean" then
        arg = arg and 1 or 0
    end
    return helper:popPage(arg)
end

function remove(appId)
    return helper:removeApp(appId)
end

function install(urlString, appId, existVersion)
    return helper:installApp_withAppId_withExistVersion(urlString, appId, existVersion)
end

function supportLazy()
    return true
end

function list(arg)
    print(arg)
end

function presentModal(view)
    helper:presentModal(view)
end

function dismissModal()
    helper:dismissModal()
end
