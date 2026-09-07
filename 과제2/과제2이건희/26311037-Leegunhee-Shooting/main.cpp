
//#include <glc2d.h>
//#include <stdio.h>
//#include <windows.h>
//#include "CApplication.h"
//
//// link the 2d game library
//#if defined(_DEBUG)
//#if defined(_M_X64) // 64-bit 아키텍처
//#pragma comment(lib, "glc2d_x64_debug.lib")
//#elif defined(_M_IX86) // 32-bit 아키텍처
//#pragma comment(lib, "glc2d_win32_debug.lib")
//#endif
//#else
//#if defined(_M_X64)
//#pragma comment(lib, "glc2d_x64_release.lib")
//#elif defined(_M_IX86)
//#pragma comment(lib, "glc2d_win32_release.lib")
//#endif
//#endif
//
//#include "glc2d.h"
//
//int main(void)
//{
//	//SDK 초기화
//	g2_InitSdk();
//
//	printf("그림 올리기.......................\n\n");
//	
//	//윈도우 생성
//	g2_CreateWin(100, 100, 800, 600, "My First Game Window");
//
//	//배경색을 바꾼다.
//	g2_SetClearColor(0xFF336699);
//
//	// 화면에 출력하기 위해서 함수를 연결한다.
//	//g2_SetRender(Render);
//
//	// 그림을 프로그램에 로딩
//	//nTx = g2_TextureLoad("Texture/tst.png");
//
//
//	// 실행
//	g2_Run();
//
//
//	// 텍스처 해제
//	//g2_TextureRelease(nTx);
//
//	// 윈도우 해제
//	g2_DestroyWin();
//
//	return 0;
//}


#if defined(_DEBUG)
#if defined(_M_X64) // 64-bit 아키텍처
#pragma comment(lib, "glc2d_x64_debug.lib")
#elif defined(_M_IX86) // 32-bit 아키텍처
#pragma comment(lib, "glc2d_win32_debug.lib")
#endif
#else
#if defined(_M_X64)
#pragma comment(lib, "glc2d_x64_release.lib")
#elif defined(_M_IX86)
#pragma comment(lib, "glc2d_win32_release.lib")
#endif
#endif

// include the 2d game header file
#include "glc2d.h"
#include <stdio.h>
#include <windows.h>
#include "CApplication.h"

CApplication g_app;

int main()
{
	g_app.Init();
	g2_Run();
	g_app.Destroy();

	return 0;
}