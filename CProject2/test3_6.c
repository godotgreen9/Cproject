#include<stdio.h>

int main()
{
	// �� ������ �Է��ϼ��� ; 10 3
	//������ ������� "10/3= 3.333333"�Դϴ�.
	// ����Ϸ��� �ƹ� Ű�� �����ʽÿ� ...
	
	int a;
	int b;
	double c;

	printf("�� ������ �Է��ϼ��� :");
	scanf_s("%d%d", &a, &b);
	c = a / (double)b;

	printf("������ �������\"%d/%d\"=%lf �Դϴ�", a, b,c);

	
	return 0;
}