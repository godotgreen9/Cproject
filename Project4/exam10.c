#include<stdio.h>

/*for�� ����ؼ� 1���� 10������ ���� ���*/

int main()
{
	int i;  
	int sum=0;

	for (i = 1; i <= 10; ++i)
	{
		sum = sum + i; //������ ������ ������ ���ƾ� i�� for�� ���� ������ 

	}
	printf("1���� 10������ ���� :%d\n", sum);

	return 0;
}
