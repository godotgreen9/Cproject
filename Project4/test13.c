#include<stdio.h>

/*break문은 해당하는 반복문 하나를 빠져나간다 별 3개만 찍히게*/

int main()
{
	int x, y;

	for (y = 0; y < 5; y++) 
	{
		for (x = 0; x < 4; ++x) 
		{
			if (x == 3) //x>2
				break;

			printf("*\t");

		}
		putchar('\n');
	}

	return 0;
}