#include<stdio.h>

int main()
{
	int nInput = 0;

	// �ݺ��� while ���迬���� ���� 1�� ������ 0���� �ν�
	// ������ �����ϴ� ���� �ݺ�
	// ������ϴ� ����(������ �����̸� ����)

	printf("%dth printf()\n", 10);//��� ���� ������ ó��
	printf("%dth printf()\n", 9);
	printf("%dth printf()\n", 8);
	printf("%dth printf()\n", 7);
	printf("%dth printf()\n", 6);
	
	scanf_s("%d", &nInput);
	
	while (nInput > 0)
	{
	    printf("%dth printf()\n", nInput);
	    //Input --;
		nInput = nInput - 1;
	}
	return 0;
}