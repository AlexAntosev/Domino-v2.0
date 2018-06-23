#include "Field.h"

Field::Field()
{
	InitializeMatrix();
	InitializeDominoes();
}

Field::~Field()
{
	for (int i = 0; i < SIZE; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	delete[] dominoes;
}

void Field::InitializeMatrix() // инициализация массива поля
{
	matrix = new FieldElement*[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		matrix[i] = new FieldElement[SIZE];
	}
}

void Field::FillMatrixFromFile(char * filename) // заполнить матрицу елементами с файла 
{
	FILE *file = fopen(filename, "r");
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			int value;
			fscanf(file, "%d,", &value);
			if (value == 0) matrix[i][j].SetElementAsEmptyElement();
			else matrix[i][j].SetElementAsNumber(value);
		}
		fscanf(file, "/n");
	}
	fclose(file);
}

void Field::InitializeDominoes() // инициализация массива домино
{
	dominoes = new Domino[15];
	int count = 0;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = i + 1; j <= 6; j++)
		{
			dominoes[count].SetValue(i, j);
			count++;
		}
	}
}