/*
#include<stdio.h>
//���������� �Լ��� ���ϵǰ� ���� �޸𸮿��� �������
//{}�Լ��� ���۰� �� {} ��� ������ ���� �����ش�
//���������� ���� ������ �޸𸮿��� ������
int main()
{
	int a = 10, b = 20;//���ο��� ����� ��������

	printf("�ٲٱ� �� a :%d, b :%d\n", a, b);
	{
		int temp;//��� �ȿ��� ������ �ȿ����� ���� �ִ�
		temp = a;
		a = b;//���������� ���� �� �������� ���
		b = temp;
		printf("%d\n", temp);
	}
	printf("�ٲ� �� a :%d, b :%d\n", a, b);
	//printf("%d\n", temp);

	return 0;
}*/
#include<stdio.h>
//
int main()
{
	int val = 10;
	{
		int val = 20;
		{
			val++;//���� ������� ����ϸ� ���� ����� �Ÿ� ������ �̿�
		}
		printf("val : %d\n", val);//val���� 21
	}
	printf("val : %d\n", val);//val���� 10
	return 0;
}