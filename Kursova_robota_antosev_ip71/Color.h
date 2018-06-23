#pragma once
struct MyColor
{
	char *name;
	int a, r, g, b;

	MyColor() {};

	MyColor(char *name, int a, int r, int g, int b)
	{
		this->name = name;
		this->a = a;
		this->r = r;
		this->g = g;
		this->b = b;
	}
};