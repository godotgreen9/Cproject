#include<stdio.h>

int main()
{
	//연속으로 문자 입력시 엔터키도 문자로 인식 두번째 %앞에 스페이스


	char ch1, ch2; 
	//printf("두개의 문자를 입력하세요:");
	//scanf_s("%c%c", &ch1,1, &ch2,1);
	
	printf("첫번째 문자를 입력하세요:");
	scanf_s("%c", &ch1, 1);
	printf("두번째 문자를 입력하세요:");
	scanf_s(" %c", &ch2, 1);

	printf("첫번째 문자:%c\n", ch1);
	printf("두번째 문자:%c\n", ch2);
	
	return 0;
}