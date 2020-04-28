#include <stdio.h>

enum E_Error {OUTOFMEMORY,OVERRANGE,HARDFULL,STACKFULL};

class Exception
{
private:
	int ErrorCode;

public:
	Exception(int ae) : ErrorCode(ae) {}
	int GetErrorCode() { return ErrorCode; }

	void ReportError()
	{
		switch (ErrorCode)
		{
		case 1:
			puts("[ERROR] 메모리 부족");

		case 2:
			puts("[ERROR] 연산 범위 초과");

		case 3:
			puts("[ERROR] 하드디스크 꽉 참");

		default:
			break;
		}
	}
};

void report()
{
	if (true) throw Exception(3);

	//여기까지 왔으면 정상 종료
}

int main()
{
	try
	{
		report();
		puts("작업완료");
	}
	catch (Exception &e)
	{
		printf("에러코드 = %d =>", e.GetErrorCode());
		e.ReportError();
	};

}