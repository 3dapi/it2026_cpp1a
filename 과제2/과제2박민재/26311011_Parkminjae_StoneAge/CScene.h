#pragma once
class CScene
{
public:
	virtual int Init();
	virtual int Update();
	virtual int Render();
	virtual int Destroy();

	virtual ~CScene() = default; // 가상 소멸자 추가
};

