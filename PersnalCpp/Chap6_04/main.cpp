#include <iostream>

using namespace std;

void printArray(const int array[], const int lenght)
{
	for (int index = 0; index < lenght; index++)
	{
		cout << array[index] << " ";
	}
	cout << endl;
}

int main()
{
	const int lenght = 5;

	int array[lenght] = { 3,5,2,1,4 };

	printArray(array, lenght);

	for (int startIndex = 0; startIndex < lenght - 1; startIndex++)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < lenght; currentIndex++)
		{
			if (array[smallestIndex] > array[currentIndex])
			{
				smallestIndex = currentIndex;
			}
		}
		{
			int temp = array[smallestIndex];
			array[smallestIndex] = array[startIndex];
			array[startIndex] = temp;
		}
		printArray(array, lenght);
	}

	

	return 0;
}