#if defined(NDEBUG) || !defined(_DEBUG)
// Releaseモード時のライブラリファイル指定
#pragma comment( lib, "ManiLib_mt.lib" )
#else
// Debugモード時のライブラリファイル指定
#pragma comment( lib, "ManiLib_mtd.lib" )
#endif

#include "Game/Frame/GameFrame.h"
#include <Windows.h>

int WINAPI WinMain(HINSTANCE inctance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	return GameFrame().Run();
}