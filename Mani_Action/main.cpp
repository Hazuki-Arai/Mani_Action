#if defined(NDEBUG) || !defined(_DEBUG)
// Release���[�h���̃��C�u�����t�@�C���w��
#pragma comment( lib, "ManiLib_mt.lib" )
#else
// Debug���[�h���̃��C�u�����t�@�C���w��
#pragma comment( lib, "ManiLib_mtd.lib" )
#endif

#include "Game/Frame/GameFrame.h"
#include <Windows.h>

int WINAPI WinMain(HINSTANCE inctance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	return GameFrame().Run();
}