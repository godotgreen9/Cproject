#include<stdio.h>

int main()
{
	int a = 0;//
	int b;
	a = a + 1;
	a = a + 1;
	a = a + 1;
	a++;//�ڱ� �ڽ��� ������Ų�� ����������(�ܵ��� ��� ������ �Ŀ� ����)
	a++;
	a++;
	++a;//���������� (���� ����)
	++a;
	++a;

	printf("%d\n", a);

	b = a++;
	printf("%d\n", b);
	b = ++a;
	printf("%d\n", b);

	return 0;
}
