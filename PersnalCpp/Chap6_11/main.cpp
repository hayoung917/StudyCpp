#include <iostream>

using namespace std;

int main()
{
	//동적할당 new, delete
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr;
	}

	return 0;
}