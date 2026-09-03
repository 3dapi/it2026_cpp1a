#include <glc2d.h>
#include <stdio.h>

#if defined(_DEBUG)
#if defined(_M_X64)
#pragma comment(lib, "glc2d_x64_debug.lib")
#elif defined(_M_IX86)
#pragma comment(lib, "glc2d_win32_debug.lib")
#endif
#else
#if defined(_M_X64)
#pragma comment(lib, "glc2d_x64_release.lib")
#elif defined(_M_IX86)
#pragma comment(lib, "glc2d_win32_release.lib")
#endif
#endif

int nTx;	

int Render()
{
	VEC2 pos(300, 200);		
	g2_Draw2D(nTx, {}, &pos);
	return 0;
}

int main()
{
	g2_InitSdk();
	printf("그림 그리기.......................\n\n");

	g2_SetClearColor(0xFF336699);

	g2_SetRender(Render);

	g2_CreateWin(100, 100, 800, 600, "My First Game Window");

	nTx = g2_TextureLoad("Texture/a.png");

	g2_Run();

	g2_TextureRelease(nTx);

	g2_DestroyWin();

	return 0;
}