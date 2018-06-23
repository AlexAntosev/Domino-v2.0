#include "Domino.h"

Domino::Domino()
{
	onTable = false;
	aligment = Aligment::Vertical;
}

Domino::~Domino()
{

}

void Domino::SetValue(int x, int y) // задать значение домино
{
	this->x = x;
	this->y = y;
}

void Domino::SetPosition(int i, int j) // задать индексы домино
{
	this->i = i;
	this->j = j;
	if (this->aligment == Aligment::Horizontal)
	{
		this->ii = i;
		this->jj = j + 1; 		
	}
	else
	{
		this->ii = i + 1;
		this->jj = j;
	}
}

void Domino::Expand() // поменять значения одного елемента домино местами
{
	int temp = this->x;
	this->x = this->y;
	this->y = temp;	
}

void Domino::ChangeAligment() // изменить положение домино
{
	if (this->aligment == Aligment::Horizontal)
	{
		this->aligment = Aligment::Vertical;
		Expand();
	}
	else this->aligment = Aligment::Horizontal;
}