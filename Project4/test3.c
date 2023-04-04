#include<stdio.h>

/* 구구단 중 한 단을 입력 받어 그단을 출력하는 프로그램*/

int main()
{
	int dan;
	int i=0;

	printf("한 개의 단을 입력하세요")
	scanf_s("%d", &dan);

	i = 1;

	while (i<=9)
	{
		printf("%d*%d=%d\n", dan,i,dan * i);
		i = i + 1;

	}
	 

	return 0;
}
