#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s("C++��Ʈ��");

	cout << s << "���ڿ� ���� : " << s.size() << endl;
	cout << s << "���ڿ� ���� : " << s.length() << endl;
	cout << s << "���ڿ� �Ҵ���� : " << s.capacity() << endl;
	cout << s << "���ڿ� �ִ���� : " << s.max_size() << endl;

	s.clear(); //empty() ������ִ��� Ȯ�� clear() ���� ����� ��
	cout << s << endl;

	cout << boolalpha << s.empty() << endl;


	return 0;
}