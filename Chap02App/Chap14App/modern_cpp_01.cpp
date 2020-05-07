#include <iostream>

using namespace std;

int main()
{
	//const char*
	auto NPCName = "Farmar";
	cout << NPCName << endl;

	//int
	auto Number = 1;
	cout << Number << endl;

	int UserMode = 4;
	auto pUserMode = &UserMode;
	cout << "pUserMode = " <<*pUserMode<< " , Address = " << pUserMode << endl;

	auto& refUesrMode = UserMode;



	return 0;
}