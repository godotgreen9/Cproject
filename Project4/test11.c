#include<stdio.h>

/* ����(��ø) for�� */

int main()
{
	int x, y;


	for (y = 0; y < 5; y++)// y�� ������ ���
	{
		for (x = 0; x < 5-y ; x++)//
		{
			printf("*\t");
		}
		printf("\n");
	}

	return 0;
}
