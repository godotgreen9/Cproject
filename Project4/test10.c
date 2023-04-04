#include<stdio.h>

/* 다중(중첩) for문 행과 열이 같은 */

int main()
{
	int x, y;

	for (y = 0; y < 5; y++)// y을 행으로 사용
	{
		{
			printf("*\t");
		}
		printf("\n");
	}

	return 0;
}
