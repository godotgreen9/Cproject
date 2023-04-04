#include<stdio.h>

//선언과 동시에 초기화

int main()
{
	int anData[4] = { 1,2,3,4 };
	int anData2[4] = { 1,2 };//남는 것은 0으로 표현 정수형 타입이라
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%d\n", anData[i]);
	}
	
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", anData2[i]);
	}
	return 0;
}