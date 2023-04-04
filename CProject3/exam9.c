#include<stdio.h>

int main()
{
	//조건 연산자 둘 중 하나를 선택할때 ? 참 :거짓

	int a, b;
	int min;

	printf("두 정수를 입력하세요:");
	scanf_s("%d%d", &a, &b);
	min = a < b ? a : b;
		printf("작은 수는:%d입니다.\n", min);

	return 0;
}