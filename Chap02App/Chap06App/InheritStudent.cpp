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
		printf("이름 %s, 나이 %d\n", name, age);
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
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}

	void report()
	{
		printf("이름 : %s, 나이 : %d, 학번 : %d 보고서 제출\n", name, age, stunum);;
	}

	void intro()
	{
		Human::intro();
		printf("학번 : %d, 이름 : %s\n", stunum, Human::name);
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
		printf("%s 를 연구하고 논문을 쓴다\n", thesis);
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
		printf("키 %dcm 몸무게 %dkg 인 %s 선수입니다.\n", height, weight, Human::name);
	}

	void fight()
	{
		puts("레프트, 라이트, 쨉쩁");
	}
};
int main()
{
	Human lee("이하영", 28);
	lee.intro();
	printf("\n");

	Student ram("김가람", 25, 3);
	ram.intro();
	ram.study();
	ram.report();
	printf("\n");


	Graduate yeo("여예지", 25, 157895, "정보통신기법");
	yeo.intro();
	yeo.research();
	printf("\n");

	Boxer kang("강정우", 28, 182, 88);
	kang.intro();
	kang.fight();
}