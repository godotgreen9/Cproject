#include<stdio.h>

/*배열의 평균값을 구하여 출력 배열명에 정수 값을 더하는 포인터 표현을 사용
평균은 소수점 이하 둘째자리까지 출력
double ary[]={1.5,20.1,16.4,2.3,3.5}
평균값 : 8.76
*/

int main()
{
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	double tot = 0;
	double avg;
	int i;
	
	


	for (i = 0; i < 5; i++)
	{
		tot += *(ary + i);
	}
	avg = tot / 5;

	printf("평균값 : %2lf",avg);

	//ary =100; 배열명에는 정수값 상수값 안됨
	*ary = *ary + 100;

	printf("%lf\n", *ary);
	printf("%lf\n", ary[0]);

	return 0;
}