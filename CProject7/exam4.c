#include<stdio.h>

int main()
{
	int nData = 10;
	int* pnData = &nData;

	printf("%d,%d\n", nData, *pnData);
	printf("%p,%p\n", &nData, pnData);//포인터실제주소값크기만큼 64비트

	*pnData = 20;
	printf("%d\n", nData);
	printf("%p\n", pnData);
	
	return 0;

}