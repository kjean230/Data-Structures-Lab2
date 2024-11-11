// Kerwyn Jean
// October 18, 2024
// C++ Code for SortedListByArray.cpp

#include "SortedListByArray.h"
#include <iostream>

SortedListByArray::SortedListByArray() 
{
	length = 0;
	currentPos = -1;
}

bool SortedListByArray::IsFull() const 
{
	return (length == MAX_ITEM);
}

int SortedListByArray::GetLength() const 
{
	return length;
}

bool SortedListByArray::IsEmpty() const 
{
	return (length == 0);
}

void SortedListByArray::InsertItem(ItemType item) 
{
	if (IsFull()) 
	{
        	std::cerr << "List is full, cannot insert item." << std::endl;
        	return;
	}

	int location = 0;
    	
	while (location < length && item.ComparedTo(info[location]) == GREATER) 
	{
        	location++;
	}

	for (int index = length; index > location; index--) 
	{
        	info[index] = info[index - 1];
    	}

    	info[location] = item;
    	length++;
}

void SortedListByArray::DeleteItem(ItemType item) 
{
	int location = 0;
	while (location < length && item.ComparedTo(info[location]) != EQUAL) 
	{
		location++;
	}

	if (location < length) 
	{
		for (int index = location + 1; index < length; index++) 
	{
        	info[index - 1] = info[index];
        }
        
	length--;
    }
}

void SortedListByArray::MakeEmpty() 
{
	length = 0;
}

void SortedListByArray::ResetList() 
{
	currentPos = -1;
}

void SortedListByArray::GetNextItem(ItemType& item) 
{
	currentPos++;
	if (currentPos < length) 
	{
		item = info[currentPos];
	}
}

void SortedListByArray::MergeList(SortedListByArray& listOne, SortedListByArray& listTwo) 
{

	MakeEmpty();

    	int i = 0, j = 0;

    	while (i < listOne.GetLength() && j < listTwo.GetLength())
    	{
        	if (listOne.info[i].ComparedTo(listTwo.info[j]) == LESS)
        	{
            		info[length++] = listOne.info[i++];
        	}
        	else
        	{
            		info[length++] = listTwo.info[j++];
        	}
    	}

    	while (i < listOne.GetLength())
    	{
        	info[length++] = listOne.info[i++];
    	}

    	while (j < listTwo.GetLength())
    	{
        	info[length++] = listTwo.info[j++];
    	}

}

void SortedListByArray::PrintList() const 
{
    	for (int i = 0; i < length; i++) 
	{
       		info[i].Print();
        	std::cout << " ";
    	}
    	std::cout << std::endl;
}

