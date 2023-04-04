#include<stdio.h>
/*문자열 복사 */
int main()
{
	char str1[] = "There is no royal road to learning C.";
	char str2[80];
	int i;
	int size;
	
	size = sizeof(str1) / sizeof(str1[0]);
	
	for (i = 0; i =size; i++) 
	{
		if (str1[i] != '\0') 
			str2[i] = str1[i];//위치 지정
	}
		printf("복사된 문장열 : %s\n", str2);
	
		return 0;
}