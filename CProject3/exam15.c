#include<stdio.h>

int main()
{
	// case �������� break �� 

	char sel = 0;

	printf("M ����,A ����,E ����\n");
	printf("�Է� :");
	scanf_s("%c",&sel,1);//c ����

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
