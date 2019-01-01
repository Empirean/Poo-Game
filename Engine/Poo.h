#pragma once

#include "Graphics.h"

class Poo
{

private:
	// State
	bool _IsEaten = false;
	// Position
	int _X;
	int _Y;
	// Speed
	int _Rate = 3;
	// Direction
	bool _Left = false;
	bool _Right = false;
	bool _Top = false;
	bool _Bottom = false;
	// Dimensions
	static constexpr int Height = 24;
	static constexpr int Width = 24;
	static constexpr int Speed = 3;
	// Clamping
	void ClampPoo();

public:

	// Constructor
	Poo();
	// Getters
	bool IsEaten() const;
	int GetLeft() const;
	int GetRight() const;
	int GetTop() const;
	int GetBottom() const;
	// Functions
	void Eat();
	void Update();
	void Draw(Graphics& gfx) const;

};

