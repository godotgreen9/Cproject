#include<stdio.h>

//����� ���ÿ� �ʱ�ȭ

int main()
{
	int anData[4] = { 1,2,3,4 };
	int anData2[4] = { 1,2 };//���� ���� 0���� ǥ�� ������ Ÿ���̶�
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%d\n", anData[i]);
	}
	
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", anData2[i]);
	}
	return 0;
}