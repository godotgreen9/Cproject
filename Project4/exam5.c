#include<stdio.h>

int main()
{
	int x = 0;//렬
	int y = 0;//행
	
	while (y < 5)
	{
		x = 0; //x값을 초기화 시켜야 제대로 구현

		while (x < 4) //값이 거짓이면 구동이 안됨
		{
			printf("*\t");
			x = x + 1;
		}
		putchar('\n');
		//printf("*\n");
		y = y + 1;

	}


	return 0;
}
