#pragma once
#include <Windows.h>
#include <string>
#include "CScene.h"



class CApplication
{
public:
	int Init();
	int Update();
	int Render();
	int Destroy();
	

protected:
	int InitSdk();

	CScene* m_pScene = nullptr;

	// windows
	POINT m_winPos { 100, 100 };
	SIZE m_winSize { 1024, 765 };

	std::string m_winName = "StoneAge"; // 윈도우 창 제목

};

