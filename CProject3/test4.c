#include<stdio.h>

int main()
{
	// Ű����� ��Ģ ������ �Է��ϸ� ����� ���
	//�ԷµǴ� ���� �Ǽ��̸� ����� �Ҽ������� ��°�ڸ�

	double a, b, res=0;
	char op;

	printf("������ �Է��ϼ��� :");
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
		puts("�ش��ϴ� �����ڰ� �����ϴ�.");
	}
	printf("�������� %.2lf�Դϴ�.\n",res);

	
		return 0;
}