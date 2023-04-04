#include<stdio.h>

int main()
{
	// 두 정수를 입력하세요 ; 10 3
	//나눗셈 연산식은 "10/3= 3.333333"입니다.
	// 계속하려면 아무 키나 누르십시요 ...
	
	int a;
	int b;
	double c;

	printf("두 정수를 입력하세요 :");
	scanf_s("%d%d", &a, &b);
	c = a / (double)b;

	printf("나눗셈 연산식은\"%d/%d\"=%lf 입니다", a, b,c);

	
	return 0;
}