#include<stdio.h>

void line_up(double*, double*, double*);//포인터변수가 3개
void exchange(double*, double*);

int main()
{
	double max, mid, min;

	printf("숫자 세 개를 입력하세요 :");
	scanf_s("%lf%lf%lf", &max, &mid, &min);

	line_up(&max, &mid, &min);
	printf("큰 수부터 차례로 출력하면 : %lf,%lf,%lf\n", max, mid, min);

	return 0;
}

void line_up(double* mp, double* ip, double* np)//큰 수부터 작은수
{
	if (*mp < *ip)//(값을 비교)
		exchange(mp, ip);//주소 값을 바꿔라 
	
	if (*mp < *np)
		exchange(mp, np);
	
	if (*ip < *np)
		exchange(ip, np);
}
void exchange(double*xp, double*yp)
{
	double temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
	
}