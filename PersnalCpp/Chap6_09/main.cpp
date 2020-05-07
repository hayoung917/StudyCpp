#include <iostream>

using namespace std;

int main()
{
	char name[] = "jack jack";

	const int n_name = sizeof(name) / sizeof(char);

	char *ptr = name;

	for (int i = 0; i < n_name; i++)
	{
		if (ptr[i] == '\0') { break; }
		cout << *(ptr + i);
	}
	return 0;
}