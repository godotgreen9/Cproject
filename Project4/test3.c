#include<stdio.h>

/* ������ �� �� ���� �Է� �޾� �״��� ����ϴ� ���α׷�*/

int main()
{
	int dan;
	int i=0;

	printf("�� ���� ���� �Է��ϼ���")
	scanf_s("%d", &dan);

	i = 1;

	while (i<=9)
	{
		printf("%d*%d=%d\n", dan,i,dan * i);
		i = i + 1;

	}
	 

	return 0;
}
