#include<stdio.h>

int main()
{
	int nInput = 0;

	// 반복문 while 관계연산자 참은 1로 거짓은 0으로 인식
	// 조건을 만족하는 동안 반복
	// 멈춰야하는 조건(조건이 거짓이면 멈춤)

	printf("%dth printf()\n", 10);//상수 말고 변수로 처리
	printf("%dth printf()\n", 9);
	printf("%dth printf()\n", 8);
	printf("%dth printf()\n", 7);
	printf("%dth printf()\n", 6);
	
	scanf_s("%d", &nInput);
	
	while (nInput > 0)
	{
	    printf("%dth printf()\n", nInput);
	    //Input --;
		nInput = nInput - 1;
	}
	return 0;
}