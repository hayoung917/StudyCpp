#include <iostream>

using namespace std;

int main()
{
	int i;
	char str[128];
	char ch;

	cout << "������ �Է��ϼ��� : ";
	cin >> i;
	cout << "�Էµ� ���� : " << i << endl;
	cin.get(ch);

	cout << "���ڿ��� �Է��ϼ��� : ";
	cin >> str;
	cout << "�Էµ� ���ڿ� : " << str << endl;
	cin.get(ch);

	cout << "���ڸ� �Է� : ";
	cin.get(ch);
	cout << "�Էµ� ���� : " << ch << endl;
	cin.get(ch);
	cout << "�������� ���ڿ� �Է� : ";
	cin.getline(str, 128);
	cout << "�Էµ� ���ڿ� : " << str << endl;

	return 0;
}