#include<stdio.h>

int main()
{
	int num;
	int num2;
	
	printf("정수값 하나를 입력하세요 :");
	scanf_s("%d", &num);
	printf("입력 받은 정수값은 %d입니다.\n",num);
	
	printf("정수값 하나를 입력하세요 :");
	scanf_s("%d", &num2);
	printf("입력 받은 정수값은 %d입니다.\n", num2);
	//scanf_3("%d%d,&num,&num2);9`

	return 0;

}