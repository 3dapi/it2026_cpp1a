#pragma once
#include "CScene.h"

class SceneResult : public CScene
{
public:
	int Init() override;
	int Update() override;
	int Render() override;
	int Destroy() override;

protected:
	int m_TxgameResult = -1;
};
