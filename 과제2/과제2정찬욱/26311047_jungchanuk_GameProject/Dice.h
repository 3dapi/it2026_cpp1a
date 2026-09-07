#pragma once

class Dice
{
public:
    bool Init();
    void Update();
    void Roll();
    void Render(float x, float y, float size = 100.0f);
    void Destroy();
    int GetNumber() const { return m_number; }

private:
    int m_textures[6] = { -1, -1, -1, -1, -1, -1 };
    int m_number = 1;
    bool m_spacePressed = false;
};