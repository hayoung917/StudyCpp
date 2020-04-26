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
		printf("�̸� = %s, ���� = %d\n", name, age);
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
		printf("%d�й� %s�Դϴ�.\n", stunum, name);
	}

	virtual void study() 
	{
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}
};

int main()
{
	Human ram("�谡��", 25);
	Student yeo("������", 25, 1534567);

	Human* pH;
	Student* pS;

	pH = &ram;		// name, age <=name(�谡��),age(25)
	pH->intro();

	pS = &yeo;		// name, age, stunum <=name(������),age(25),stunum(1534567)
	pS->intro();

	pH = &yeo;		// name, age, stunum <= name, age, stunum
	pH->intro();

	// pS = &h;		// name,age,stunum(???) <= name(�谡��), age(25)
	pS = (Student*)&ram;
	pS->intro();
	


	return 0;
}
