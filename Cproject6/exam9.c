#include<stdio.h>
/*배열에서 문자열 처리방법*/

int main()
{
	char str[50] = "I like C programming";//공백도 계산포함
	//null 문자 자동으로 채워진다
	char str2[10];//기본이 쓰레기값

	printf("string:%s\n", str);
	printf("string:%c\n", str[19]);//g
	printf("string:%c\n", str[20]);//널문자 그래서 쓰레기 값 안나옴
	printf("string:%c\n", str[21]);

	printf("string:%s\n", str2);//쓰레기값

	str[8] = '\0';//널 문자는 문자열의 끝을 의미한다
	printf("string:%s\n", str);
	str[6] = '\0';//널 문자는 문자열의 끝을 의미한다
	printf("string:%s\n", str);
	str[1] = '\0';//널 문자는 문자열의 끝을 의미한다
	printf("string:%s\n", str);
	
	return 0;

}