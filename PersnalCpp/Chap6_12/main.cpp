#include <iostream>

using namespace std;

//배열 동적할당
int main()
{
	int length;

	cin >> length;

	//int array[length];
	int* array = new int[length](); //초기화 동적할당

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; i++)
	{
		cout << (uintptr_t) & array[i] << endl;
		cout << array[i] << endl;
	}

	delete[] array;
	return 0;
}