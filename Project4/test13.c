#include<stdio.h>

/*break���� �ش��ϴ� �ݺ��� �ϳ��� ���������� �� 3���� ������*/

int main()
{
	int x, y;

	for (y = 0; y < 5; y++) 
	{
		for (x = 0; x < 4; ++x) 
		{
			if (x == 3) //x>2
				break;

			printf("*\t");

		}
		putchar('\n');
	}

	return 0;
}