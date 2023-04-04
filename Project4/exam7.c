#include<stdio.h>

int main()
{
	int nData = 10;
	
	nData--;//9 단독존재시 상관없음

	printf("%d\n",++nData);//nData++ 결과치는 9 ++nData는 10

	return 0;
}
