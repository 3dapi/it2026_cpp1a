#pragma once
#include "TableGameManager.h"
class CApplication
{

public:
	int Init();
	int Update();
	int Render();
	int Destroy();

protected:
	int Initsdk();

private:
	void LoadTextures();
	void ReleaseTextures();
	void HandleInput();
	void UpdateWindowTitle();

	void DrawHand(
		const std::vector<Card>& hand,
		float y,
		bool hideSecondCard);

	int GetCardTexture(
		const Card& card,
		bool useBackTexture) const;

	int tableTexture = -1;
	int cardTextures[53] = {};
	int backTexture = -1;

	bool previousBetKey = false;
	bool previousHitKey = false;
	bool previousStandKey = false;
	bool previousRestartKey = false;
};

int AppUpdate();
int AppRender();
