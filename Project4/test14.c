#include<stdio.h>

// 2배수이거나 3배수 제외
int main()
{
	int num;
	printf("start!");

	for(num=0; num<20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)//논리연산자or
			continue;
			
		printf("%d", num);
	}
	printf("end!\n");

	return 0;
}