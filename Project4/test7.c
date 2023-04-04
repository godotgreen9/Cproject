#include<stdio.h>

/*x의 값이 0부터 10까지 변할 때 y의 값을 출력하는 y=2x+1*/

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