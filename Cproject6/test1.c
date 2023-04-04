#include<stdio.h>
/*apple elppa 데이타 개수와 index 수 갯수 혼동주의 */

int main()
{
	char word[80];
	int i;
	int count;
	int size;

	printf("단어를 입력하세요 :");
	scanf_s("%s", word, 80);//10글자를 넣으면 index는 9(0부터)
	/*
	count = 0;
	while (word[count] != '\0')//!=같지않다 널문자가 아니면
	{
		count++;
	}
	*/
	
	/*count = 0;
	size = sizeof(word) / sizeof(word[0]);
	for (i = 0; i < size;i++) {
		if (word[count] != '\0') {
			count++;
		}
	}*/

	for (i = 0; word[i] != '\0'; i++)
		;//apple돌리면 i값은 5
	count = i;

	printf("단어를 뒤집으면:");
	
	for (i=count-1;i>=0;i--)
	{
		printf("%c", word[i]);
	}
    printf("\n");
	puts(word);//문자열을 출력하는 함수 puts

	return 0;
}