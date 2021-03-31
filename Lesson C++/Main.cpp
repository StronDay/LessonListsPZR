#include <iostream>
using namespace std;

typedef unsigned int uint;

struct List 
{
	uint value;
	List* nextPointer = NULL;
};

List* CreateList(List* list) 
{
	List* newList = new List;
	if (newList != NULL) {

		list->nextPointer = newList;

		cout << "Enter volue: ";
		cin >> newList->value;
		cout << endl;

		return newList;
	}

	cout << "No Memorry Allocated" << endl;
	exit(0);
}

void PrintList(const List* list) 
{
	uint counter = 1;
	cout << "All Lists:" << endl << endl;

	while (list != NULL) {

		cout << "-> Number List " << counter << endl;
		cout << "nextPointer " << list->nextPointer << endl;
		cout << "Value: " << list->value << endl << endl;
		list = list->nextPointer;

		counter++;
	}

}

int main()
{
	uint number;

	cout << "Enter Number: ";
	cin >> number;
	cout << endl;

	if (number <= 0) {

		return 0;
	}

	List* list = new List;
	if (list != NULL) {

		List* basePointer;
		List* currentList;

		cout << "Enter value: ";
		cin >> list->value;
		cout << endl;

		basePointer = list;
		currentList = list;

		for (uint i = 0; i < number - 1; i++) {

			currentList = CreateList(currentList);
		}

		cout << endl;
		PrintList(basePointer);

		return 0;
	}

	cout << "No Memorry Allocated" << endl;
	return 0;
}