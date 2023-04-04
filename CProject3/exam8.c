#include<stdio.h>

int main()
{
	//if  else 구조문

	int nInput = 0;

	scanf_s("%d", &nInput);
	if (nInput >= 10) 
	{
		puts("10이상");
	}//가로는 시각적 의미 
	else
	{
		puts("10미만");
	}
	return 0;
}