#include<stdio.h>

int main()
{
	//논리연산자 and or not

	int a = 10;
	
	printf("논리곱 연산 : %d\n", (a>5)&&(a<=15));//그리고
	printf("논리곱 연산 : %d\n", (a!=10) || (a == 20));//or 거짓과거짓
	printf("논리부정 연산 : %d\n", !((a -5)> 0));//거짓
	printf("피연산자가 상수인 경우 : %d\n", -3.4 &&(a > 0));0이 아니면 도두 참

	return 0;
}