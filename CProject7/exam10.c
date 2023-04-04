#include<stdio.h>

int main()
{
	double* ip;// int* ip;
	double db = 6.5;
	ip = &db;

	printf("%p\n", ip);//p포인터 형식으로 출력 실행은 되나 형식이 맞아야 합니다

	return 0;
}