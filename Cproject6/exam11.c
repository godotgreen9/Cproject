#include<stdio.h>
/*���ڿ� ���� */
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
			str2[i] = str1[i];//��ġ ����
	}
		printf("����� ���忭 : %s\n", str2);
	
		return 0;
}