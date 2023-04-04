#include<stdio.h>
//{} 블럭 설정 위치 확인 메인인지 
int main()
{
	int nData = 10;

	printf("%d\n", nData);//10

	if (nData>0)
	{
		int nData = 20;//지역변수
		printf("%d\n", nData);//20
		
	}

	printf("%d\n", nData);//10

	return 0;
}