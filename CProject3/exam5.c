#include<stdio.h>

int main()
{
	//||=or &&=and  or연산은 앞이 참이면 무조건 참 
	int nData = 10;
	int nNewData = 20;
	int nResult = 10;

	printf("%d\n", nData == nResult || nData>nNewData);
	printf("%d\n", nData != nResult && nData < nNewData);
	printf("%d\n", nData >= nResult && ++nNewData);//++가진값에서 1증가
	printf("%d\n", nNewData);

	return 0;
}