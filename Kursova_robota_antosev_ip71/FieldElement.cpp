#include "FieldElement.h"

FieldElement::FieldElement()
{
	value = 0;
	access = true;
	type = Type::Empty;
}

void FieldElement::SetElementAsNumber(int value) // задать елемент как число
{
	this->value = value;
	this->access = false;
	this->type = FieldElement::Type::Number;
}

void FieldElement::SetElementAsDomino(int value) // задать елемент как домино
{
	this->value = value;
	this->access = false;
	this->type = FieldElement::Type::Domino;
}

void FieldElement::SetElementAsEmptyElement() // задать елемент как пустой елемент
{
	this->value = 0;
	this->access = true;
	this->type = FieldElement::Type::Empty;
}