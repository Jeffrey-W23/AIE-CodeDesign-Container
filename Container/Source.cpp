#include <iostream>
using namespace std;
#include "DynamicArray.h"
#include "Stack.h"
#include "AssociativeArray.h"

int main()
{
	// DYNAMICARRAY
	DynamicArray<int> myArray(3);
	
	cout << "//////// TEST DYNAMIC ARRAY ////////" << endl;

	cout << "---- SIZE ----" << endl;
	cout << "Used: " << myArray.Size() << endl;
	cout << "Capacity: " << myArray.Capacity() << endl;
	cout << "---- SIZE ----" << endl << endl;

	cout << "---- PUSHBACK ----" << endl;
	myArray.PushBack(9);
	myArray.PushBack(8);
	cout << "Used: " << myArray.Size() << endl;
	cout << "Capacity: " << myArray.Capacity() << endl;
	cout << "Values are:" << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}
	cout << "---- PUSHBACK ----" << endl << endl;

	cout << "---- PUSHFRONT ----" << endl;
	myArray.PushFront(6);
	myArray.PushFront(7);
	cout << "Used: " << myArray.Size() << endl;
	cout << "Capacity: " << myArray.Capacity() << endl;
	cout << "Values are:" << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}
	cout << "---- PUSHFRONT ----" << endl << endl;

	cout << "---- INSERT ----" << endl;
	myArray.Insert(1, 4);
	cout << "Used: " << myArray.Size() << endl;
	cout << "Capacity: " << myArray.Capacity() << endl;
	cout << "Values are:" << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}
	cout << "---- INSERT ----" << endl << endl;

	cout << "---- POPBACK ----" << endl;
	int value = myArray.PopBack();
	cout << "Values Popped:" << value << endl;
	cout << "Used: " << myArray.Size() << endl;
	cout << "Capacity: " << myArray.Capacity() << endl;
	cout << "Values are:" << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}
	cout << "---- POPBACK ----" << endl << endl;

	cout << "---- REMOVE ----" << endl;
	myArray.Remove(2);
	cout << "Used: " << myArray.Size() << endl;
	cout << "Capacity: " << myArray.Capacity() << endl;
	cout << "Values are:" << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}
	cout << "---- REMOVE ----" << endl << endl;

	cout << "---- POPFRONT ----" << endl;
	myArray.PopFront();
	cout << "Used: " << myArray.Size() << endl;
	cout << "Capacity: " << myArray.Capacity() << endl;
	cout << "Values are:" << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}
	cout << "---- POPFRONT ----" << endl << endl;

	cout << "---- CLEAR ----" << endl;
	myArray.Clear();
	cout << "Used: " << myArray.Size() << endl;
	cout << "Capacity: " << myArray.Capacity() << endl;
	cout << "Values are:" << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}
	cout << "---- CLEAR ----" << endl;

	cout << "//////// TEST DYNAMIC ARRAY ////////" << endl << endl << endl << endl;

	// MAP
	AssociativeArray<int> myAssociativeArray;

	cout << "//////// TEST ASSOCIATIVE ARRAY ////////" << endl;

	cout << "---- ADDITEM ----" << endl;
	myAssociativeArray.AddItem("Name1", 0);
	cout << "Size: " << myAssociativeArray.Size() << endl;
	cout << "Values are:" << endl;
	for (int i = 0; i < myAssociativeArray.Size(); ++i)
	{
		cout << myAssociativeArray[i] << endl;
	}
	cout << "---- ADDITEM ----" << endl << endl;

	cout << "---- GETITEMNAME ----" << endl;
	char* text = myAssociativeArray.GetItemName(0);
	cout << "Size: " << myAssociativeArray.Size() << endl;
	cout << "Values are:" << endl;
	for (int i = 0; i < myAssociativeArray.Size(); ++i)
	{
		cout << text << endl;
	}
	cout << "---- GETITEMNAME ----" << endl << endl;

	cout << "---- ISITEM ----" << endl;
	bool isitem = myAssociativeArray.IsItem("Name1");
	cout << "Size: " << myAssociativeArray.Size() << endl;
	cout << "Is Name1 an item:" << endl;
	
	if (isitem)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << "---- ISITEM ----" << endl << endl;

	cout << "---- CLEAR ----" << endl;
	myAssociativeArray.Clear();
	cout << "Size: " << myAssociativeArray.Size() << endl;
	cout << "Values are:" << endl;
	for (int i = 0; i < myAssociativeArray.Size(); ++i)
	{
		cout << myAssociativeArray[i] << endl;
	}
	cout << "---- CLEAR ----" << endl << endl;

	cout << "//////// TEST ASSOCIATIVE ARRAY ////////" << endl << endl << endl << endl;

	// STACK
	Stack<int> myStack;

	cout << "//////// TEST STACK ////////" << endl;

	cout << "---- ISEMPTY ----" << endl;
	bool isempty = myStack.IsEmpty();
	cout << "Used: " << myStack.Size() << endl;
	cout << "Values are:" << endl;
	
	if (isempty)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << "---- ISEMPTY ----" << endl << endl;

	cout << "---- PUSH ----" << endl;
	myStack.Push(4);
	myStack.Push(5);
	myStack.Push(3);
	cout << "Used: " << myStack.Size() << endl;
	cout << "Values are:" << endl;
	cout << myStack.Top() << endl;
	cout << "---- PUSH ----" << endl << endl;

	cout << "---- POP ----" << endl;
	myStack.Pop();
	cout << "Used: " << myStack.Size() << endl;
	cout << "Values are:" << endl;
	cout << myStack.Top() << endl;
	cout << "---- POP ----" << endl << endl;

	cout << "---- SECONDLAST ----" << endl;
	myStack.SecondLast();
	cout << "Used: " << myStack.Size() << endl;
	cout << "Values are:" << endl;
	cout << myStack.SecondLast() << endl;
	cout << "---- SECONDLAST ----" << endl << endl;
	
	cout << "//////// TEST STACK ////////" << endl << endl << endl << endl;

	system("Pause");
	return 0;
}