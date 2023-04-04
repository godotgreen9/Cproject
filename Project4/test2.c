#include<stdio.h>

/* 1부터 100까지 홀수들의 합 while 문 이용*/

int main()
{
	int i;
	int sum = 0;

	i = 1;
	while (i<100) 
	{
		if (i % 2 != 0) {
			sum = sum + i;
		}
		i = 1 + i;

		printf("1부터 100까지의 홀수의 합은 : %d\n", sum);
    }

	return 0;
}
