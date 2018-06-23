#pragma once
struct Domino
{
	enum Aligment
	{
		Vertical,
		Horizontal
	};

	int x;
	int y;	
	Aligment aligment;
	bool onTable;
	int startCoordX, startCoordY, prevCoordX, prevCoordY;
	int i, j, ii, jj;
	int previ, prevj;

	Domino();

	void SetValue(int x, int y);
	void SetPosition(int i, int j);
	void Expand();
	void ChangeAligment();

	~Domino();
};