#include<stdio.h>

/*함수안에서 다른 함수를 호출가능하다*/

int AbsoCompare(int,int );
int GetAbsoValue(int);


int main()
{
	int num1, num2;
	printf("두 개의 정수 입력 :");
	scanf_s("%d%d", &num1, &num2);//10 -20 
	printf("%d와%d중 절대값이 큰 정수 :%d\n", num1, num2, AbsoCompare(num1, num2));

	return 0;
}
int AbsoCompare(int num1, int num2)//10 -20
{
	if (GetAbsoValue(num1)> GetAbsoValue(num2)) // >= < == != 10>20
		return num1;
	else
		return num2;
}
int GetAbsoValue(int num)//절대값비교
{
	if (num < 0)
		return num * (-1);
    else
		return num;
}