#pragma once


#include "Graphics.h"


class Player
{

private:
	// initial position
	int _X = Graphics::ScreenWidth / 2;
	int _Y = Graphics::ScreenHeight / 2;

	// Dimensions
	static constexpr int Width = 20;
	static constexpr int Height = 20;

	// Speed
	static constexpr int Speed = 3;

public:

	// constructor
	Player();

	// Getters
	int GetTop() const;
	int GetBottom() const;
	int GetLeft() const;
	int GetRight() const;

	// Movement
	void MoveLeft();
	void MoveRight();
	void MoveUp();
	void MoveDown();

	// Clamping
	void Clamp(int left, int right, int top, int bottom);

	// Draw
	void Draw(Graphics& gfx) const;
	
};

