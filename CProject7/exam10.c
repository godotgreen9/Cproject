#include<stdio.h>

int main()
{
	double* ip;// int* ip;
	double db = 6.5;
	ip = &db;

	printf("%p\n", ip);//p������ �������� ��� ������ �ǳ� ������ �¾ƾ� �մϴ�

	return 0;
}