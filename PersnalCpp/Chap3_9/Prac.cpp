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

	//기사를 봤을때
	my_article_flags |= option_viewed;
	cout << "option_viewed " << bitset<8>(my_article_flags) << endl;

	//기사 좋아요를 클릭
	my_article_flags |= option_liked;
	cout << "option_liked " << bitset<8>(my_article_flags) << endl;

	//기사 좋아요를 다시 클릭
	my_article_flags |= option_liked;
	cout << "option_reliked " << bitset<8>(my_article_flags) << endl;

	//본 기사만 삭제
	my_article_flags &= ~option_viewed;
	cout << "option_delete " << bitset<8>(my_article_flags) << endl;

	return 0;
}