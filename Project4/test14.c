#include<stdio.h>

// 2����̰ų� 3��� ����
int main()
{
	int num;
	printf("start!");

	for(num=0; num<20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)//��������or
			continue;
			
		printf("%d", num);
	}
	printf("end!\n");

	return 0;
}