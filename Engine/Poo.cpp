#include "Poo.h"
#include <random>




Poo::Poo()
{
	std::random_device rd;
	std::mt19937 rng(rd());

	std::uniform_int_distribution<int> xDist(0, 1);
	std::uniform_int_distribution<int> yDist(0, 1);

	if (xDist(rng) == 0)
	{
		_Top = true;
	}
	else
	{
		_Bottom = true;
	}

	if (yDist(rng) == 0)
	{
		_Left = true;
	}
	else
	{
		_Right = true;
	}
}

void Poo::Eat()
{
	_IsEaten = true;
}

bool Poo::IsEaten()
{
	return _IsEaten;
}

int Poo::GetLeft()
{
	return _X;
}

int Poo::GetRight()
{
	return _X + Width;
}

int Poo::GetTop()
{
	return _Y;
}

int Poo::GetBottom()
{
	return _Y + Height;
}

int Poo::GetX()
{
	return _X;
}

int Poo::GetY()
{
	return _Y;
}

int Poo::SetX(int x)
{
	return _X = x;
}

int Poo::SetY(int y)
{
	return _Y = y;
}

void Poo::Update(Graphics& gfx)
{
	if (_Top) _Y -= _Rate;
	if (_Bottom) _Y += _Rate;
	if (_Left) _X -= _Rate;
	if (_Right) _X += _Rate;
	ClampPoo(gfx);
}


void Poo::ClampPoo(Graphics& gfx)
{
	if (_X < 0)
	{
		_X = 0;
		_Left = false;
		_Right = true;
	}

	if (_Y < 0)
	{
		_Y = 0;
		_Top = false;
		_Bottom = true;
	}

	if (_X > (gfx.ScreenWidth - 1) - Width)
	{
		_X = (gfx.ScreenWidth - 1) - Width;
		_Right = false;
		_Left = true;
	}

	if (_Y > (gfx.ScreenHeight - 1) - Height)
	{
		_Y = (gfx.ScreenHeight - 1) - Height;
		_Bottom = false;
		_Top = true;
	}
}



