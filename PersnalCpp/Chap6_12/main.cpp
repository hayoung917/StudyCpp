#include <iostream>

using namespace std;

//�迭 �����Ҵ�
int main()
{
	int length;

	cin >> length;

	//int array[length];
	int* array = new int[length](); //�ʱ�ȭ �����Ҵ�

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