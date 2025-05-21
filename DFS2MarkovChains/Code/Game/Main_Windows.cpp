#define WIN32_LEAN_AND_MEAN		// Always #define this before #including <windows.h>
#include <windows.h>			// #include this (massive, platform-specific) header in VERY few places (and .CPPs only)
#include "Game/App.hpp"
#include "Engine/Core/Time.hpp"
#include "Engine/Core/EngineCommon.hpp"
// 
// //-----------------------------------------------------------------------------------------------
extern App* g_theApp;
// //-----------------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------
 int WINAPI WinMain(_In_ HINSTANCE applicationinstancehandle, _In_opt_ HINSTANCE previousInstance, _In_ LPSTR commandlinestring, _In_ int nShowCmd)
 {
 	UNUSED( applicationinstancehandle );
    UNUSED(previousInstance);
    UNUSED(commandlinestring);
    UNUSED(nShowCmd);


 	g_theApp = new App();
 	g_theApp->Startup();
    g_theApp->Run();
 	g_theApp->Shutdown();
 	delete g_theApp;
 	g_theApp = nullptr;
 
 	return 0;
 }