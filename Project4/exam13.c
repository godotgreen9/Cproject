#include<stdio.h>

/* ���ѷ��� ���� while��*/

int main()
{
	int sum = 0;
	int num = 0;


	while (1)//���ѷ���
	{
		sum += num;
		if (sum > 5000)
			break;//�ʰ��ϸ� ����������
		num++;
	}

	printf("sum:%d\n", sum);
	printf("num:%d\n", num);

	return 0;
}