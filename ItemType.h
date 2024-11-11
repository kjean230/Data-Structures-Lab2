// Kerwyn Jean
// October 18, 2024
//  SPECIFICATION FILE ItemType.h 
#ifndef ITEMTYPE_H
#define ITEMTYPE_H

#include <iostream>


const int MAX_ITEM = 10;
enum RelationType { LESS, EQUAL, GREATER };

class ItemType {

public:

ItemType() : value(0) {} 

ItemType(int val) : value(val) {}

RelationType ComparedTo(const ItemType& otherItem) const 
{
	if (value < otherItem.value)
	   return LESS;
	else if (value > otherItem.value)
	   return GREATER;
	else
	   return EQUAL;
}

void Print() const 
{
	std::cout << value << " ";
}

void Initialize(int val) 
{
	value = val;
}

bool operator==(const ItemType& other) const 
{
	return value == other.value;
}

friend std::ostream& operator<<(std::ostream& os, const ItemType& item) 
{
	os << item.value;
	return os;
}
	private:
	int value;
};

#endif
