#include<stdio.h>

int main()
{
	unsigned int num;

	//-2147483648~2147483647
	// 0~4294967295(unsigned int)
	printf("unsigned int형에 최대값을 입력하세요 :");
	scanf_s("%u", &num);

	printf("unsigned int형에 저장된 값은 : %u", num);

	return 0;
}