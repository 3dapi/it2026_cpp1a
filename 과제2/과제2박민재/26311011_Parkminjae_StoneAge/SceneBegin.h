#pragma once
#include "CScene.h"

class SceneBegin : public CScene
{
public:
	int Init() override;
	int Update() override;
	int Render() override;
	int Destroy() override;

protected:
	int m_TxgameStart = -1;
};
