#include <stdio.h>

#include "CApplication.h"
#include "glc2d.h"
#include "SceneBegin.h"


extern CApplication g_App;

int RenderApp()
{
	g_App.Render();
	return 0;
}

int UpdateApp()
{
	g_App.Update();
	return 0;
}

int CApplication::Init()
{
	// 초기화 및 초기 데이터 로딩
	g2_InitSdk();

	// 데이터 업데이트 및 렌더링
	g2_SetFrameMove(UpdateApp);
	g2_SetRender(RenderApp);
	
	// window 생성.
	g2_CreateWin(m_winPos.x, m_winPos.y, m_winSize.cx, m_winSize.cy, m_winName.c_str());

	m_pScene = new SceneBegin();
	m_pScene->Init();
	
	return 0;
}

int CApplication::Update()
{
	if (m_pScene) // 씬이 존재하면 업데이트
	{
		m_pScene->Update(); // 씬 업데이트
	}

	return 0;
}

int CApplication::Render()
{
	if (m_pScene) // 씬이 존재하면 렌더링
	{
		m_pScene->Render(); // 씬 렌더링
	}

	return 0;
}

int CApplication::Destroy()
{
	
	if(m_pScene)
	{
		m_pScene->Destroy();
		delete m_pScene;
		m_pScene = nullptr;
	}

	// 마무리, 윈도우 해제
	g2_DestroyWin();

	return 0;
}

int CApplication::InitSdk()
{
	return 0;
}

