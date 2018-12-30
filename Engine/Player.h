#pragma once


#include "Graphics.h"


class Player
{

private:
	int _X = 400;
	int _Y = 300;

public:
	Player();
	int GetX();
	int GetY();
	int GetTop();
	int GetBottom();
	int GetLeft();
	int GetRight();

	void Clamp(int left, int right, int top, int bottom);
	void Draw(Graphics& gfx);

	void MoveLeft();
	void MoveRight();
	void MoveUp();
	void MoveDown();

	static constexpr int Width = 20;
	static constexpr int Height = 20;
	static constexpr int Speed = 3;
};

