#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s("C++스트링");

	cout << s << "문자열 길이 : " << s.size() << endl;
	cout << s << "문자열 길이 : " << s.length() << endl;
	cout << s << "문자열 할당길이 : " << s.capacity() << endl;
	cout << s << "문자열 최대길이 : " << s.max_size() << endl;

	s.clear(); //empty() 값비어있는지 확인 clear() 글자 지우는 것
	cout << s << endl;

	cout << boolalpha << s.empty() << endl;


	return 0;
}