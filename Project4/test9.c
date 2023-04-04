/*#include<stdio.h>

 키보드로 부터 양수를 반복적으로 입력 받으면서 그 합을 출력 이과정을
음수가 입력 될때까지 반복한다.처음부터 음수가 입력되면 바로 종료

int main()
{
	int n = 0;
	int sum = 0;

	scanf_s("%d", &n);
	while (n >= 0) {
		sum = sum + n;
		printf("지금까지 입력된 값의 합 : %d\n", sum);

		printf("양수를 입력하세요 :");
		scanf_s("%d", &n);
	}

	return 0;
}*/

#include<stdio.h>

/* for 문 사용 양수를 반복적으로 입력 받으면서 그 합을 출력 이과정을
음수가 입력 될때까지 반복한다.처음부터 음수가 입력되면 바로 종료*/

int main()
{
	int n;
	int i;
	int sum = 0;

	printf("양수를 입력하세요 :");
	scanf_s("%d",&n);
	
	while (n >= 0) 
	{
		sum = 0;// 초기화 작업
		for(i=0; i<=n; ++i)
		{
			sum += i;//복합대입 연산자 sum = sum + i;
		}
		printf("1부터 %d까지 합은 : %d\n",n,sum);

		printf("양수를 입력하세요 :");
		scanf_s("%d", &n);
	}

	return 0;
}