#include <iostream>

using namespace std;

#define LIKE_APPLE

void doSomethieg()
{
#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#else
	cout << "Orange " << endl;
#endif // !LIKE_APPLE
}

int main()
{
	doSomethieg();


	return 0;
}
