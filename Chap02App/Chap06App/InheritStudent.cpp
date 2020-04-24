#include <stdio.h>
#include <string.h>

class Human
{
protected:
	char name[12];
	int age;

//private:
	//char name[12];
	//int age;

public:
	Human(const char* aname, int aage)
	{
		strcpy(name, aname);
		age = aage;
	}

	void intro()
	{
		printf("�̸� %s, ���� %d\n", name, age);
	}
};

class Student : public Human
{
private:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage)
	{
		stunum = astunum;
	}

	void study()
	{
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}

	void report()
	{
		printf("�̸� : %s, ���� : %d, �й� : %d ���� ����\n", name, age, stunum);;
	}

	void intro()
	{
		Human::intro();
		printf("�й� : %d, �̸� : %s\n", stunum, Human::name);
	}
};

class Graduate : public Student
{
protected:
	char thesis[40];

public:
	Graduate(const char* aname, int aage, int astunum, const char* athesis) :
		Student(aname, aage, astunum)
	{
		strcpy(thesis, athesis);
	}

	void research()
	{
		printf("%s �� �����ϰ� ���� ����\n", thesis);
	}
};

class Boxer : public Human
{
protected:
	int height, weight;

public:
	Boxer(const char* aname, int aage, int aheight, int aweight) :
		Human(aname, aage)
	{
		height = aheight;
		weight = aweight;
	}

	void intro()
	{
		//Human :: intro();
		printf("Ű %dcm ������ %dkg �� %s �����Դϴ�.\n", height, weight, Human::name);
	}

	void fight()
	{
		puts("����Ʈ, ����Ʈ, µ��");
	}
};
int main()
{
	Human lee("���Ͽ�", 28);
	lee.intro();
	printf("\n");

	Student ram("�谡��", 25, 3);
	ram.intro();
	ram.study();
	ram.report();
	printf("\n");


	Graduate yeo("������", 25, 157895, "������ű��");
	yeo.intro();
	yeo.research();
	printf("\n");

	Boxer kang("������", 28, 182, 88);
	kang.intro();
	kang.fight();
}