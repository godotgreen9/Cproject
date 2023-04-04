#include<stdio.h>

int main()
{
	char str[] = "Good morning!";//자동으로 배열크기 만듭
	//문자열의 끝에는 null('\0')이 자동으로 삽입되어 14
	printf("배열 str의 크기 : %d\n", sizeof(str));
	printf("널 문자 문자형 출력 : %c\n", str[13]);
	printf("널 문자 문자형 출력 : %d\n", str[13]);
	printf("널 문자 문자형 출력 : %d\n", str[4]);//공백은 아스키32
	//배열도 변수라 볼수 있다

	str[12] = '?'//배열도 변경기 가능하다
	printf("문자열 출력 : %s\n", str);

	return 0;
}