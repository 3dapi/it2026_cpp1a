#include "CApplication.h"
#include "glc2d.h"
#include <stdio.h>

extern CApplication g_app;

int UpdateAPP()
{
    g_app.Update();
    return 0;
}

int RenderAPP()
{
    g_app.Render();
    return 0;
}

int CApplication::Init()
{
    this->SdkInit();
    m_sceneBegin.Init();

    return 0;
}

int CApplication::Render()
{
    m_sceneBegin.Render();
    return 0;
}

int CApplication::Update()
{
    m_sceneBegin.Update();
    return 0;
}

int CApplication::Destroy()
{
    m_sceneBegin.Destroy();

    // 윈도우 해제
    g2_DestroyWin();

    return 0;
}

int CApplication::SdkInit()
{
    // sdk 초기화
    g2_InitSdk();

    printf("Starting ... \n\n");

    g2_SetFrameMove(UpdateAPP);									// 게임 데이터 update 함수
    g2_SetRender(RenderAPP);										// 게임 데이터 렌더링 함수

    // 윈도우 생성
    g2_CreateWin(winPos.x, winPos.y, winSize.cx, winSize.cy, m_winName.c_str());

    return 0;
}
