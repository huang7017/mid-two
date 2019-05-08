#include <iostream>
using namespace std;

// newList is the reversal of list
template<typename T>
void reverse(const T list[], T newList[], int size)
{
	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
		newList[j] = list[i];
	}
}


template<typename T>
void printArray(const T list[], int size)
{
	for (int i = 0; i < size; i++)
		cout << list[i] << " ";
}

int main()
{
	const int SIZE = 6;
	char list[] = { 'a', 'b','c', 'd', 'e', 'f' };
	char newList[SIZE];

	reverse(list, newList, SIZE);

	cout << "The original array: ";
	printArray(list, SIZE);
	cout << endl;

	cout << "The reversed array: ";
	printArray(newList, SIZE);
	cout << endl;

	double list2[] = { 1.1,2.2,3.3,4.4,5.5,6.6 };
	double newList2[SIZE];

	reverse(list2, newList2, SIZE);

	cout << "The original array: ";
	printArray(list2, SIZE);
	cout << endl;

	cout << "The reversed array: ";
	printArray(newList2, SIZE);
	cout << endl;
	system("pause");
	return 0;
}