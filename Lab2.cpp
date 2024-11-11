// Kerwyn Jean
// October 18, 2024
// C++ Code for lab#2 implementation

#include "SortedListByArray.h"
#include "ItemType.h"
#include <iostream>

using namespace std;

int main() {
    
	SortedListByArray listOne, listTwo, mergedList;

// first list

	ItemType item1(0), item2(1), item3(3), item4(10);

    	listOne.InsertItem(item1);

    	listOne.InsertItem(item2);

    	listOne.InsertItem(item3);

    	listOne.InsertItem(item4);

// second list

    	ItemType item5(5), item6(11), item7(12);

    	listTwo.InsertItem(item5);

    	listTwo.InsertItem(item6);

    	listTwo.InsertItem(item7);

    	cout << "List One: ";
	listOne.PrintList();

    	cout << "List Two: ";
	listTwo.PrintList(); 

    	mergedList.MergeList(listOne, listTwo);

    	cout << "Merged List: ";
	mergedList.PrintList();

return 0;

}
