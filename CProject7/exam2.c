#include<stdio.h>

int main()
{
	int a;
	int *ap = &a;

	printf("ap��ü�� ����� �� : %x\n", ap);//x: 16����
	printf("ap��ü�� �ּ� �� : %x\n", &ap);
	//printf("ap������ ������ �ǹ� : %x\n",*ap);

	return 0;
}
