#include<stdio.h>

int main()
{
	// 이름 나이 성별 키 입력 입력문자확인

	char name[80];//이름
	char sex;//성별
	int age;//나이
	double height;//키

	printf("이름을 입력하세요 :");
	scanf_s("%s", name, 80); //문자
	printf("나이을 입력하세요 :");
	scanf_s("%d", &age); //숫자
	printf("성별을 입력하세요 :");
	scanf_s(" %c", &sex, 1); //문자 \n은 줄바꿈
	printf("키를 입력하세요 :");
	scanf_s("%lf", &height); //숫자

	printf("이름:%s,성별:%c,나이:%d,키:%.lf\n",name,sex,age,height);


	return 0;
}