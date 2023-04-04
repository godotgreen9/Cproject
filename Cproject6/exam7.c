#include<stdio.h>
/*문자 문자열 표기 방법 배열선언시 여유있게 만들어서 */
int main()
{
	char word[40];//문자저장시 주의 필요
	int i = 0;
	int size;

	size = sizeof(word) / sizeof(word[0]);

	word[0] = 'L';
	word[1] = 'O';
	word[2] = 'V';
	word[3] = 'E';
	word[4] = '\0';//null 문자종료 인식 방법

	printf("%s\n", word);//s는string(문자열,중요)은 문자끝 인식 불량
	printf("%zd\n", sizeof(char));

	for (i = 0; i < size; i++)
	  printf("%c", word[i]);//문자출력시 C


	return 0;
}