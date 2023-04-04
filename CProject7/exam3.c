#include<stdio.h>

int main()
{
	int a=10;
	int* ap = &a;

	printf("%d\n", a);
	printf("%x\n", & a);
	printf("%x\n", ap);
	printf("%x\n", &ap);
	printf("%d\n", *ap);//포인터 변수가 가지고 있는 값


	return 0;
}
