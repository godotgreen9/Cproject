#include<stdio.h>

/* ���ѷ��� ���� while��*/

int main()
{
	int n;
	int sum = 0;

	while(1)//���ѷ���
	{
		printf("0�Ǵ� ������� �Է��ϼ��� :");
		scanf_s("%d", &n);

		if (n < 0)
			break;
		sum += n;
	}
	printf("�׵��� ������ �� :%d\n", sum);

	return 0;
}
