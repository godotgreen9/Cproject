#include<stdio.h>

int add(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int result;
	result = add(3, 4);
	printf("µ¡¼À °á°ú1:%d\n", result);
	result = add(5, 8);
	printf("µ¡¼À °á°ú2:%d\n", result);

	return 0;
}