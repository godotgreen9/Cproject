#include<stdio.h>

void line_up(double*, double*, double*);//�����ͺ����� 3��
void exchange(double*, double*);

int main()
{
	double max, mid, min;

	printf("���� �� ���� �Է��ϼ��� :");
	scanf_s("%lf%lf%lf", &max, &mid, &min);

	line_up(&max, &mid, &min);
	printf("ū ������ ���ʷ� ����ϸ� : %lf,%lf,%lf\n", max, mid, min);

	return 0;
}

void line_up(double* mp, double* ip, double* np)//ū ������ ������
{
	if (*mp < *ip)//(���� ��)
		exchange(mp, ip);//�ּ� ���� �ٲ�� 
	
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