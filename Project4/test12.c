#include<stdio.h>

/* ����(��ø) for�� */

int main()
{
	int i, j;
	

	for (i = 0; i <=9 ; i++)// y�� ������ ���
	{
		for (j = 2; j <= 8 ; j+=3)//
		{
			printf("%d*%d = %2d  ",j,i,j*i);
		}
		printf("\n");
	}

	return 0;
}
