#include <stdio.h>

class DBQuery
{
private:
	static int hCon;
	int nResult;

public:
	DBQuery() {};
	static void DBConnect(const char* Server, const char* ID, const char* Pass);
	static void DBDisConnect();
	bool RunQuery(const char* SQL);
	//...
};

int DBQuery::hCon;

void DBQuery::DBConnect(const char* Server, const char* ID, const char* Pass)
{
	//���⼭ DB������ �����Ѵ�.

	hCon = 1234;
	puts("���Ἲ��");
}

void DBQuery::DBDisConnect()
{
	//��������
	hCon = NULL;
	puts("��������");
}

bool DBQuery::RunQuery(const char* SQL)
{
	//Query(hCon, SQL);
	puts(SQL);
	return true;
}

int main()
{
	DBQuery::DBConnect("", "root", "mysql_p@ssw0rd");
	DBQuery con1, con2, don3;

	con1.RunQuery("SELECT *FROM usertbl WHERE userID = 'KBS';");

	DBQuery::DBDisConnect();
}