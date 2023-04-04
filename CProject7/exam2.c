#include<stdio.h>

int main()
{
	int a;
	int *ap = &a;

	printf("ap자체에 저장된 값 : %x\n", ap);//x: 16진쉐
	printf("ap자체에 주소 값 : %x\n", &ap);
	//printf("ap포인터 변수의 의미 : %x\n",*ap);

	return 0;
}
