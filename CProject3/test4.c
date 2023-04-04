#include<stdio.h>

int main()
{
	// 키보드로 사칙 연산을 입력하면 결과를 출력
	//입력되는 값은 실수이며 결과는 소수점이하 둘째자리

	double a, b, res=0;
	char op;

	printf("수식을 입력하세요 :");
	scanf_s("%lf%c%lf", &a, &op,1, &b);

	switch(op)
	{
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case '*':
		res = a * b;
		break;
	case '/':
		res = a / b;
		break;
	default:
		puts("해당하는 연산자가 없습니다.");
	}
	printf("연산결과는 %.2lf입니다.\n",res);

	
		return 0;
}