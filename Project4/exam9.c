#include<stdio.h>

/*for문 가장 많이 쓰임 */

int main()
{
	int i; //변수 선언 

	for (i=0;i<5;++i)//칸마다 문법 1.제어 변수 (초기화)2.조건식3.증가식
	{
		printf("%dth\n", i);
	}
	return 0;
}
