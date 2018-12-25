#pragma once

#include "Graphics.h"

class Poo
{

private:
	bool _IsEaten = false;
	int _X;
	int _Y;
	int _Rate = 3;

public:
	Poo();
	void Eat();
	bool IsEaten();
	int GetLeft();
	int GetRight();
	int GetTop();
	int GetBottom();
	int GetX();
	int GetY();
	int SetX(int x);
	int SetY(int y);

	static constexpr int Height = 24;
	static constexpr int Width = 24;
	
};

