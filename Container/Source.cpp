#include <iostream>
using namespace std;
#include "DynamicArray.h"

int main()
{
	// add all of them for testing. organize better. Seperate into different functions for each test.
	DynamicArray<int> myArray(3);
	
	cout << "--Size--" << endl;
	cout << "Used: " << myArray.Size() << endl;
	cout << "Capacity: " << myArray.Capacity() << endl << endl;
	
	cout << "--Adding Size--" << endl;
	myArray.PushBack(9);
	myArray.PushBack(8);
	myArray.PushBack(7);
	myArray.PushBack(6);
	myArray.PushBack(5);

	cout << "Used: " << myArray.Size() << endl;
	cout << "Capacity: " << myArray.Capacity() << endl << endl;

	cout << "Values are" << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}

	myArray.Insert(1, 4);

	cout << "Values are" << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}

	int value = myArray.PopBack();
	cout << "Values Popped " << value << endl;

	cout << "Values are" << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}

	system("Pause");
	return 0;
}