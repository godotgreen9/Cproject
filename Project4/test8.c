#include<stdio.h>

/*���� �ϳ��� ������  ������ 7���� ��� for�� ���*/

int main()
{
	int i;

	for (i= 1; i <= 9; i++)
	{
		
		printf("7*%d = %2d ",i,7*i);//2d���ڸ��� ����
		if(i % 3 == 0)//i�� 3���� ���� ������ �ٹٲ� ����
			printf("\n");
	}
	

	return 0;
}