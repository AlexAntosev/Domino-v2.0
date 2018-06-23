#include "FieldElement.h"

FieldElement::FieldElement()
{
	value = 0;
	access = true;
	type = Type::Empty;
}

void FieldElement::SetElementAsNumber(int value) // ������ ������� ��� �����
{
	this->value = value;
	this->access = false;
	this->type = FieldElement::Type::Number;
}

void FieldElement::SetElementAsDomino(int value) // ������ ������� ��� ������
{
	this->value = value;
	this->access = false;
	this->type = FieldElement::Type::Domino;
}

void FieldElement::SetElementAsEmptyElement() // ������ ������� ��� ������ �������
{
	this->value = 0;
	this->access = true;
	this->type = FieldElement::Type::Empty;
}