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
}
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
#include<stdio.h>
//call by value:���� �Ѱ��ִ� ���

int add_ten(int);

int main()
{
	int a = 10;
	a = add_ten(a);
	printf("a :%d\n", a);//a�� 20

	return 0;
}
int add_ten(int b)
{
	b = b + 10;

	return b;
}
#include<stdio.h>
//call by reference: �ּҸ� �Ѱ��ִ� ���
void add_ten(int*);
int main()
{
	int a = 10;
	add_ten(&a);
	printf("a :%d\n", a);
	return 0;
}
void add_ten(int* b)//return�� �ʿ����
{
	*b = *b + 10;
}*/

#include<stdio.h>
//object file�� �ݱ���
//�������� static�� ���� ������ �ֿ켱

void increase();
int num = 100;//static num���� ����

int main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		increase();
	}
	printf(" % d\n", num);
	return 0;
}

void increase()
{
	static int sum = 0;//��������static ��������
	sum++;
	printf("sum :%d\n", sum);//1,2,3,4,5
}