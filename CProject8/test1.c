#include<stdio.h>

double ary_avg(int* ap, int len);

int main()
{
	int ary[5] = { 75,80,92,88,98 };
	int* ap = ary;
	double res;
	int size;

	size = sizeof(ary) / sizeof(ary[0]);
	res = ary_avg(ary,size);
	
	printf("%.2lf", res);

	return 0;
}
double ary_avg(int* ap, int len)
{
	int i;
	int sum = 0;
	double ave;
	for (i = 0; i < 
		len; i++)
	{
		// sum += *(ap++); 하나로 표현가능!!
		sum += *ap; // sum = sum + *ap; 
		ap++; // ap = ap + 1;
	}
	

	ave =  sum / (len*1.0);
	return ave;
}