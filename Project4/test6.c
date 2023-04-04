#include<stdio.h>

/*나이를 입력하세요 1.2.3.4.5 다섯명의 평균 나이는 */

int main()
{
	int i;
	int age;
	int sum =0;
	
	for (i = 1; i <= 5; ++i)
	{
		printf("%d.나이를 입력하세요:",i);
		scanf_s("%d", &age);
		sum = sum +age;

	}
	printf("다섯명의 평균 나이는 %.1lf입니다.\n",sum/5.0);//소수점주의

	return 0;
}