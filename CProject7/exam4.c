#include<stdio.h>

int main()
{
	int nData = 10;
	int* pnData = &nData;

	printf("%d,%d\n", nData, *pnData);
	printf("%p,%p\n", &nData, pnData);//�����ͽ����ּҰ�ũ�⸸ŭ 64��Ʈ

	*pnData = 20;
	printf("%d\n", nData);
	printf("%p\n", pnData);
	
	return 0;

}