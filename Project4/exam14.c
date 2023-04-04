#include<stdio.h>

int main()
{
	int i;
	int sum = 0;

	for (i = 1; i <= 100; i++) 
	{
		if (i % 3 == 0)//삼의 배수를 누적하라
			continue;//조건이 맞으면 다시 위로 조건으로 가라
			sum += i;
		printf("누적된 값 : %d\n", sum);
	}
	//printf("누적된 값 : %d\n", sum);

	return 0;
}