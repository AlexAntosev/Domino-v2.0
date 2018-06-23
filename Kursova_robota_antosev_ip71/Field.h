#pragma once
#include "FieldElement.h"
#include "Domino.h"
#include <iostream>

struct Field
{
	static const int SIZE = 9;
	FieldElement **matrix;
	Domino *dominoes;
	
	Field();
	~Field();

	void InitializeMatrix();
	void InitializeDominoes();
	void FillMatrixFromFile(char * filename);
};