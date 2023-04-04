#include<stdio.h>
//배열명은 상수값이다 주소을 가리키는
int main()
{
	//char* fruit = "stawberry"; OK
	//char fruit[20] ="stawberry";OK 배열선언과 동시에 문자열 대입
	char fruit[20];
	fruit ="strawberry";// 변수가 아닌 배열은 상수값(주소에다 문자열대입)
	
	printf("%s\n", fruit);

	return 0;

}