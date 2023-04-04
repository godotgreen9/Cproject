#include<stdio.h>

/* 무한루프 설정 while문*/

int main()
{
	int sum = 0;
	int num = 0;


	while (1)//무한루프
	{
		sum += num;
		if (sum > 5000)
			break;//초과하면 빠져나가라
		num++;
	}

	printf("sum:%d\n", sum);
	printf("num:%d\n", num);

	return 0;
}