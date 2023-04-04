#include<stdio.h>

//문자열은 배열의 형태로 구현되어 있다
 
int main()
{
	char str[80] = "dream";//여유 있게
	int count = 0;
	int i = 0;
	int size = 0;
	
	while (str[i] != '\0')//문자열이 널이 아닐떄까지 반복
	{
		count++;
		i++;
	}
	/*size = sizeof(str()) / sizeof(str(0));

	for (i; i <= size; i++)
		count += count;*/

	printf("배열에 저장된 문자열의 길이 : %d\n", count);

	return 0;
}