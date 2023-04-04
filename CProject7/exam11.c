#include<stdio.h>

int main()
{
	char c1 = 'A';
	char c2 = 'B';

	printf("% zX\n", &c1);
	printf("% zX\n", &c1+1);
	printf("% zX\n", &c1+2);

	printf("% c\n", c1);
	printf("% c\n", c1 + 1);
	printf("% c\n", c1 + 2);

	printf("% c\n", *&c1);
	printf("% c\n", *&c1 + 1);
	printf("% c\n", *&c1 + 2);

	return 0;
}