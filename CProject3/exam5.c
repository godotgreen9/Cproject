#include<stdio.h>

int main()
{
	//||=or &&=and  or������ ���� ���̸� ������ �� 
	int nData = 10;
	int nNewData = 20;
	int nResult = 10;

	printf("%d\n", nData == nResult || nData>nNewData);
	printf("%d\n", nData != nResult && nData < nNewData);
	printf("%d\n", nData >= nResult && ++nNewData);//++���������� 1����
	printf("%d\n", nNewData);

	return 0;
}