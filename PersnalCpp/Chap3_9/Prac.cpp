#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	const unsigned char option_viewed = 1 << 0;
	const unsigned char option_edited = 1 << 1;
	const unsigned char option_liked = 1 << 2;
	const unsigned char option_shared = 1 << 3;
	//const unsigned char option_deleted = 1;

	unsigned char my_article_flags = 0;

	//��縦 ������
	my_article_flags |= option_viewed;
	cout << "option_viewed " << bitset<8>(my_article_flags) << endl;

	//��� ���ƿ並 Ŭ��
	my_article_flags |= option_liked;
	cout << "option_liked " << bitset<8>(my_article_flags) << endl;

	//��� ���ƿ並 �ٽ� Ŭ��
	my_article_flags |= option_liked;
	cout << "option_reliked " << bitset<8>(my_article_flags) << endl;

	//�� ��縸 ����
	my_article_flags &= ~option_viewed;
	cout << "option_delete " << bitset<8>(my_article_flags) << endl;

	return 0;
}