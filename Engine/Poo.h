#pragma once

#include "Graphics.h"

class Poo
{

private:
	bool _IsEaten = false;
	int _X;
	int _Y;
	int _Rate = 3;

	bool _Left = false;
	bool _Right = false;
	bool _Top = false;
	bool _Bottom = false;

	void ClampPoo(Graphics& gfx);	

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
	void Update(Graphics& gfx);

	static constexpr int Height = 24;
	static constexpr int Width = 24;
	static constexpr int Speed = 3;
	
};

