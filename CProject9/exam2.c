#include<stdio.h>

//문자열은 배열의 형태로 구현되어 있다

int main()
{
	printf("주소값을 출력 : %p\n", "dream");
	printf("첫번째 문자를 출력 : %c\n", *"dream");//*시작주소의 값을 출력
	printf("세번째 문자를 출력 : %c\n", *("dream"+2));//*( +)
	printf("세번째 문자를 출력 : %c\n", "dream" [2]);//[]
	return 0;
}