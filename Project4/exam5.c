#include<stdio.h>

int main()
{
	int x = 0;//��
	int y = 0;//��
	
	while (y < 5)
	{
		x = 0; //x���� �ʱ�ȭ ���Ѿ� ����� ����

		while (x < 4) //���� �����̸� ������ �ȵ�
		{
			printf("*\t");
			x = x + 1;
		}
		putchar('\n');
		//printf("*\n");
		y = y + 1;

	}


	return 0;
}
