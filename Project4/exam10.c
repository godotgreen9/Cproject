#include<stdio.h>

/*for문 사용해서 1부터 10까지의 합을 출력*/

int main()
{
	int i;  
	int sum=0;

	for (i = 1; i <= 10; ++i)
	{
		sum = sum + i; //누적은 양쪽의 변수가 같아야 i는 for문 제어 값누적 

	}
	printf("1부터 10까지의 합은 :%d\n", sum);

	return 0;
}
