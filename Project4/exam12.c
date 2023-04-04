#include<stdio.h>

/* 무한루프 설정 while문*/

int main()
{
	int n;
	int sum = 0;

	while(1)//무한루프
	{
		printf("0또는 양수값을 입력하세요 :");
		scanf_s("%d", &n);

		if (n < 0)
			break;
		sum += n;
	}
	printf("그동안 누적된 값 :%d\n", sum);

	return 0;
}
