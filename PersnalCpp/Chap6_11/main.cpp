#include <iostream>

using namespace std;

int main()
{
	//�����Ҵ� new, delete
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr;
	}

	return 0;
}