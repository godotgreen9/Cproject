#include<stdio.h>

int main()
{
	int nums[5];
	int max;
	int i;

	printf("다섯 개의 숫자를 입력하세요 :");
	for (i = 0; i < 5; i++) 
	{
		scanf_s("%d", &nums[i]);
	}

	max = nums[0];

	for (i=0; i<5; i++)
	{
		if (max < nums[i])
			max = nums[i];


	}
	//10 30 40 20 50(무조건 첫째값이 큰걸로 비교
	printf("가장 큰 값은 : %lf입니다.\n", max);
	
	return 0;

}