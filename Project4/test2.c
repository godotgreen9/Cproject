#include<stdio.h>

/* 1���� 100���� Ȧ������ �� while �� �̿�*/

int main()
{
	int i;
	int sum = 0;

	i = 1;
	while (i<100) 
	{
		if (i % 2 != 0) {
			sum = sum + i;
		}
		i = 1 + i;

		printf("1���� 100������ Ȧ���� ���� : %d\n", sum);
    }

	return 0;
}
