#include<stdio.h>

int main()
{
	// case 구문에서 break 전 

	char sel = 0;

	printf("M 오전,A 오후,E 저녁\n");
	printf("입력 :");
	scanf_s("%c",&sel,1);//c 문자

	switch (sel)
	{
	case'M':
	case'm':
		printf("Morning\n");
		break;

	case'A':
	case'a':
		printf("Afternoon\n");
		break;
	case'E':
	case'e':
		printf("Evening\n");
		//break;
		
	}

	return 0;
}
