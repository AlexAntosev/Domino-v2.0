#pragma once

struct FieldElement
{
	enum Type
	{
		Empty,
		Number,
		Domino
	};

	int value;
	bool access;
	Type type;

	FieldElement();
	~FieldElement() {};

	void SetElementAsNumber(int value);
	void SetElementAsDomino(int value);
	void SetElementAsEmptyElement();
};
