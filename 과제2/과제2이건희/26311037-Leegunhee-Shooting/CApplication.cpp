#include "glc2d.h"
#include "CApplication.h"
#include <stdio.h>

extern CApplication g_app;

int AppUpdate()
{
	return g_app.Update();
}

int AppRender()
{
	return g_app.Render();
}


int CApplication::Init()
{
	InitSDK();
	m_scenebegin.Init();
	return 0;
}

int CApplication::Update()
{
	m_scenebegin.Update();
	return 0;
}

int CApplication::Render()
{
	m_scenebegin.Render();
	return 0;
}

int CApplication::Destroy()
{
	m_scenebegin.Destroy();
	g2_DestroyWin();
	return 0;
}

int CApplication::InitSDK()
{
	//SDK√ ±‚»≠
	g2_InitSdk();

	printf("Starting... \n\n");
	g2_SetFrameMove(AppUpdate);
	g2_SetRender(AppRender);

	g2_CreateWin(m_winPos.x, m_winPos.y, m_winSize.cx, m_winSize.cy, m_winName.c_str());

	g2_SetClearColor(0xFF000000);

	return 0;
}
