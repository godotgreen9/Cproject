#include<stdio.h>

/*for문 사용해서 변동조건으로*/

int main()
{
	int total = 0;
	int i, num;
	
	printf("0부터 num까지의 덧셈, num은 ?");
	scanf_s("%d", &num);

	for (i = 0; i <= num; ++i)
	{
		total = total + i;

	}
	printf("0부터 %d까지 덧셈결과 : %d\n", num, total);

	return 0;
}