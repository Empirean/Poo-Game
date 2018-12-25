#include "Poo.h"



Poo::Poo()
{
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

