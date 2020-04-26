#include <stdio.h>
#include <string.h>

class Human
{
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) 
	{
		strcpy(name, aname);
		age = aage;
	}

	 virtual void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
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
		printf("%d학번 %s입니다.\n", stunum, name);
	}

	virtual void study() 
	{
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
};

int main()
{
	Human ram("김가람", 25);
	Student yeo("여예지", 25, 1534567);

	Human* pH;
	Student* pS;

	pH = &ram;		// name, age <=name(김가람),age(25)
	pH->intro();

	pS = &yeo;		// name, age, stunum <=name(여예지),age(25),stunum(1534567)
	pS->intro();

	pH = &yeo;		// name, age, stunum <= name, age, stunum
	pH->intro();

	// pS = &h;		// name,age,stunum(???) <= name(김가람), age(25)
	pS = (Student*)&ram;
	pS->intro();
	


	return 0;
}
