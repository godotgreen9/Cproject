#include<stdio.h>

void ary_prn(int*);

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	ary_prn(ary);
	return 0;
}

void ary_prn(int* ap)
{
	int i;
	for (i = 0; i < 5; i++) 
	{
		printf("%3d",ap[i]);
	}
}