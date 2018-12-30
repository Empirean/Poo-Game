#include "Player.h"



Player::Player()
{
}

int Player::GetX()
{
	return _X;
}

int Player::GetY()
{
	return _Y;
}

int Player::GetTop()
{
	return _Y;
}

int Player::GetBottom()
{
	return _Y + Height;
}

int Player::GetLeft()
{
	return _X;
}

int Player::GetRight()
{
	return _X + Width;
}

void Player::Clamp(int left, int right, int top, int bottom)
{
	if (_X < left)
	{
		_X = 0;
	}
	if (_Y < top)
	{
		_Y = 0;
	}
	if (_X + Width > right)
	{
		_X = right - Width;
	}
	if (_Y + Height > bottom)
	{
		_Y = bottom - Height;
	}
}

void Player :: UpdateX(int x)
{
	_X += x;
}

void Player::UpdateY(int y)
{
	_Y += y;
}


