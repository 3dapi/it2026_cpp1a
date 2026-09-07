#include "SceneBegin.h"
#include "glc2d.h"
#include <stdio.h>

int SceneBegin::Init()
{
	m_TxgameStart = g2_TextureLoad("Texture/gameStart.jpg");

	return 0;
}

int SceneBegin::Update()
{
	return 0;
}

int SceneBegin::Render()
{
	VEC2 pos1 = { 0, 0 };

	g2_Draw2D(m_TxgameStart, {}, &pos1);

	return 0;
}

int SceneBegin::Destroy()
{
	g2_TextureRelease(m_TxgameStart);
	return 0;
}	
