#include<stdio.h>

/*x�� ���� 0���� 10���� ���� �� y�� ���� ����ϴ� y=2x+1*/

int main()
{
	int x, y;
	
	for (x=0 ; x <= 10; ++x)
	{		
		y = 2 * x + 1;
	
		printf("%d\t", y);// "%5d"
	}
	printf("\n");

	return 0;
}