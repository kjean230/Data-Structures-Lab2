// Kerwyn Jean
// October 18, 2024
// C++ code for SortedListByArray.h

#ifndef SORTEDLISTBYARRAY_H

#define SORTEDLISTBYARRAY_H

#include "ItemType.h"

class SortedListByArray {

public:

	SortedListByArray();

	void MakeEmpty();

	void InsertItem(ItemType item);

	void DeleteItem(ItemType item);

	bool IsFull() const;

	bool IsEmpty() const;

	int GetLength() const;

	void RetrieveItem(ItemType& item, bool& found);

	void ResetList();

	void GetNextItem(ItemType& item);

	void MergeList(SortedListByArray& listOne, SortedListByArray& listTwo);

	void PrintList() const;

private:

	int length;

	ItemType info[MAX_ITEM];

	int currentPos;

};

#endif
