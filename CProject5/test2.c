#include<stdio.h>

/*�Լ��ȿ��� �ٸ� �Լ��� ȣ�Ⱑ���ϴ�*/

int AbsoCompare(int,int );
int GetAbsoValue(int);


int main()
{
	int num1, num2;
	printf("�� ���� ���� �Է� :");
	scanf_s("%d%d", &num1, &num2);//10 -20 
	printf("%d��%d�� ���밪�� ū ���� :%d\n", num1, num2, AbsoCompare(num1, num2));

	return 0;
}
int AbsoCompare(int num1, int num2)//10 -20
{
	if (GetAbsoValue(num1)> GetAbsoValue(num2)) // >= < == != 10>20
		return num1;
	else
		return num2;
}
int GetAbsoValue(int num)//���밪��
{
	if (num < 0)
		return num * (-1);
    else
		return num;
}