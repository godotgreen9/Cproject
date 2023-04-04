#include<stdio.h>

int main()
{
	char ch='A';
	int in=100;
	double db=100.0;

	char* cp = &ch;//포인터 변수는 항상 시작주소값
	int* ip = &in;
	double* dp = &db;

	printf("%zd,%zd,%zd\n", sizeof(cp), sizeof(ip), sizeof(dp));
	//결과 포인터 변수의 크기는 가르키는 곳이나 64바이트에서는 8바이트
	printf("%d,%d,%d\n", sizeof(*cp), sizeof(*ip), sizeof(*dp));
	//가르키는 곳 크기 문자1 정수4 실수8

	return 0;

}