#include <vector>
#include "glc2d.h"

#pragma once
class SceneGameBegin
{
public:
	int Init();
	int Render();
	int Update();
	int Destroy();

protected:
	// game texture
	int m_txMario = -1;
	int m_txBackground = -1;
	VEC2 m_txMariosize{ 0.2f, 0.2f };
	VEC2 m_txBackgroundsize{ 1, 1 };
};

