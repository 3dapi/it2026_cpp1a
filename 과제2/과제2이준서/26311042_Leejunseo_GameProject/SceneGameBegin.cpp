#include "glc2d.h"
#include "SceneGameBegin.h"

int SceneGameBegin::Init()
{
    m_txMario = g2_TextureLoad("mario.png");
    m_txBackground = g2_TextureLoad("background.png");
    return 0;
}

int SceneGameBegin::Render()
{
    g2_Draw2D(m_txBackground, nullptr, nullptr, &m_txBackgroundsize);
    g2_Draw2D(m_txMario, nullptr, nullptr, &m_txMariosize);
    return 0;
}

int SceneGameBegin::Update()
{
    return 0;
}

int SceneGameBegin::Destroy()
{
    return 0;	
}
