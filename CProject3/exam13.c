#include<stdio.h>

int main()
{
	// ���Ӱ��� �־� 10 �������� �۰ų� ������

	int nInput = 0;
	scanf_s("%d", &nInput);
	if (nInput >= 10)
	{
		if (nInput > 20)
			puts("20�ʰ�");
		else
			puts("20����");
	}
	else
	{
		printf("10�̸�");
		if (nInput >= 5)
			puts("5�̻�");
		else
			puts("5�̸�");
	}
		
	return 0;
}