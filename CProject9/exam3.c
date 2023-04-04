#include<stdio.h>

int main()
{
	char* name;
	name = "Hong gildong";

	printf("이름 : %s\n", name);//가능이유 p변수가 시작변수를 가리키고있고
	printf("여섯번째 문자 : %c\n", name[5]);//배열표현도 가능

	return 0;
}