#include "SceneResult.h"
#include "glc2d.h"
#include <stdio.h>

int SceneResult::Init()
{
	m_TxgameResult = g2_TextureLoad("Texture/gameResult.jpg");

	return 0;
}

int SceneResult::Update()
{
	return 0;
}

int SceneResult::Render()
{
	VEC2 pos1 = { 0, 0 };

	g2_Draw2D(m_TxgameResult, {}, &pos1);

	return 0;
}

int SceneResult::Destroy()
{
	g2_TextureRelease(m_TxgameResult);
	return 0;
}
