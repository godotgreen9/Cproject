#include<stdio.h>

/* 다중(중첩) for문 */

int main()
{
	int i, j;
	

	for (i = 0; i <=9 ; i++)// y을 행으로 사용
	{
		for (j = 2; j <= 8 ; j+=3)//
		{
			printf("%d*%d = %2d  ",j,i,j*i);
		}
		printf("\n");
	}

	return 0;
}
