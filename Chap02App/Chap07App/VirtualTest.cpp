#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

class Human
{
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage)
	{
		strcpy(name, aname); //�� �ʱ�ȭ
		age = aage;
	}

	virtual void intro()
	{
		printf("%s��(��) %d�� �Դϴ�.\n", name, age);
	}
};

class Student : public Human
{
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage)
	{
		stunum = astunum;
	}
	
	void intro()
	{
		printf("%d�� %s �Դϴ�.\n", stunum, name);
	}
};

int main()
{
	Human h("���Ͽ�", 28);
	Student s("�谡��",25,1);

	Human* pH;
	Student* pS;

	//printf("Human size : %d, Student size : %d\n", sizeof(h), sizeof(s));

	pH = &h;
	pH->intro();

	pS = &s;
	pS->intro();

	pH = &s;
	pH->intro();

	pS = (Student*)&h;
	pS->intro(); //IS A ���� ����ȯ virtual


	while (1)
	{
		int sel;

		cout << "���ϴ� ���� ��������(1 : Human | 2 : Student | 9 : ����) : ";
		cin >> sel;

		if (sel == 1)
		{
			pH = &h;
		}
		else if (sel == 2)
		{
			pH = &s;
		}
		else if (sel == 9)
		{
			exit(-1);
		}
		else
		{
			cout << "�´� ���� �����ϴ�" << endl;
			exit(-1);
		}

		pH->intro();
	}
}