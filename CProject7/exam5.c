#include<stdio.h>

int main()
{
	int num1 = 100, num2 = 100;
	int* pnum;//포인터 변수선언

	//printf("%p\n", *pnum);
	pnum = &num1;
	*pnum = *pnum + 30;//(*pnum)+=30; 130
	
	pnum = &num2;
	*pnum = *pnum - 30;//(*pnum)-=30; 70

	printf("num1:%d,num2 :%d\n", num1, num2);

	return 0;

}