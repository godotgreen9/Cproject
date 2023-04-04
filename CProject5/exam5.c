#include<stdio.h>

/*함수형식  1.반환타입이 있는 거int Add(매개 변수 2개 필요)
2.반환타입 없는것(매개변수 있고 출력만) 3.매개 변수 없는 것
4.반환타입 매개변수 없는 것(단순출력만)*/


int Add(int num1, int num2)
{
	return num1 + num2;
}
void ShowAddResult(int result)
{
	printf("덧셈 결과 출력 : %d\n", result);
}
int ReadNum(void)
{
	int num;
	scanf_s("%d", &num);
	return num;
}
void HowToUseThisProg(void)
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다");
	printf("자! 그럼 두 개의 정수를 입력하세요,\n");
}

int main()
{
	int result, num1, num2;
	
	HowToUseThisProg();
	
	num1=ReadNum();
	num2=ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);


	return 0;
}