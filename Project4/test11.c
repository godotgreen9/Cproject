#include<stdio.h>

/* 다중(중첩) for문 */

int main()
{
	int x, y;


	for (y = 0; y < 5; y++)// y을 행으로 사용
	{
		for (x = 0; x < 5-y ; x++)//
		{
			printf("*\t");
		}
		printf("\n");
	}

	return 0;
}
