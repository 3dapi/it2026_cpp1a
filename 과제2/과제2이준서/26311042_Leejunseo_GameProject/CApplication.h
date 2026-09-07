#pragma once
#include <Windows.h>
#include <string>
#include "SceneGameBegin.h"

class CApplication
{
public:
	int Init();
	int Render();
	int Update();
	int Destroy();

	int SdkInit();

	POINT winPos{ 100, 100 };
	SIZE winSize{ 1200, 800 };
	std::string m_winName = "Shadow Mini Game";

	SceneGameBegin m_sceneBegin;
};

