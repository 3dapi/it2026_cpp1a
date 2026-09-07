#include "SceneBegin.h"
#include "glc2d.h"

int SceneBegin::Init()
{
	this->m_txt = g2_TextureLoad("resouce/tetris.png");
	return 0;
}

int SceneBegin::Update()
{
	return 0;
}

int SceneBegin::Render()
{
	g2_Draw2D(
		m_txt,
		nullptr,
		&pos,
		&scale
	);
	return 0;
}

int SceneBegin::Destroy()
{
	
	return 0;
}
