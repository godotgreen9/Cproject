
/*
#include<stdio.h>

double get_item(double*)

int main()
{
	double ary[] = { 0.1,0.3,0.5,0.7,0.9 };
	double res;

	res = get_item(ary);
	printf("ù��° ȣ���� �� : %.1lf\n", res);//0.1

	res = get_item(ary);
	printf("�ι�° ȣ���� �� : %.1lf\n", res);//0.3
	return 0;
}
double get_item(double* ap)
{
	static int i = 0;
	double temp;

	temp = *(ap + i);
	i++;

	return temp;
}

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
}
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
#include<stdio.h>
//������ �Լ�
int* increase();
int num;
int main()
{
	int i;
	int* sp;
	for (i = 0; i < 5; i++)
	{
		sp = increase();
		printf("sum :%d\n", *sp);
		printf("sum :%d\n", *&num);
	}
	return 0;
}
int* increase()
{
	static int sum = 0;
	sum++;
	num = 100;
	//return &sum;//�ּҸ� ��ȯ
	return &num;
}
#include<stdio.h>
void exchange();
//
int a, b;//�������� ����
int main()
{
	printf("������ �� ���� �Է��ϼ��� :");
	scanf_s("%d%d", &a, &b);
	exchange();
	printf("a:%d,b:%d\n", a, b);
	return 0;
}
void exchange()
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//����Ȱ��
//���� ������ �̸� ���� ����� ������ �ƴ�
//�޸𸮰� ���� �� �� �׶� ����� ����
//malloc
int main()
{
	int* ip;
	double* dp;
	//int a;
	//ip=&a;
	ip = (int*)malloc(sizeof(int));//4����Ʈ ������� �����ͷ� ����
	dp = (double*)malloc(sizeof(double));//8;����Ʈ
	*ip = 10;
	*dp = 3.4;
	printf("���������� ��� :%d\n", *ip);
	printf("�Ǽ������� ��� :%lf\n", *dp);
	free(ip);
	free(dp);
	return 0;
}*/
