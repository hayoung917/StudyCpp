#include <iostream>

using namespace std;

int main()
{
	//È¦ Â¦ ÇÁ·Î±×·¥
	int input;

	cout << "Á¤¼ö ÀÔ·Â : ";
	cin >> input;

	if (input % 2 == 0)
	{
		cout << "Â¦";
	}
	else
	{
		cout << "È¦";
	}

	return 0;
}