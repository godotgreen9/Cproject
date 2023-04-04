#include<stdio.h>

int main()
{
	char word[80];
	int i;

	printf("단어를 입력하세요");
	scanf_s("%s", word, 80);//&를 붙이지 않는다
	i = 0;
	//scanf함수는 문자열 입력을 받으면 자동으로 널문자를 채워준다

	while (word[i]!='\0')//!=같지않다 널문자가 아니면
	{
		i++;

	}
	printf("%s 단어의 길이는 %d자입니다.\n", word, i);

	return 0;
}