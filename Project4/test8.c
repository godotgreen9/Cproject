#include<stdio.h>

/*변수 하나를 가지고  구구단 7단을 출력 for문 사용*/

int main()
{
	int i;

	for (i= 1; i <= 9; i++)
	{
		
		printf("7*%d = %2d ",i,7*i);//2d두자리수 셋팅
		if(i % 3 == 0)//i를 3으로 나누 값으로 줄바꿈 실행
			printf("\n");
	}
	

	return 0;
}