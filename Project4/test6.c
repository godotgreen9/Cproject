#include<stdio.h>

/*���̸� �Է��ϼ��� 1.2.3.4.5 �ټ����� ��� ���̴� */

int main()
{
	int i;
	int age;
	int sum =0;
	
	for (i = 1; i <= 5; ++i)
	{
		printf("%d.���̸� �Է��ϼ���:",i);
		scanf_s("%d", &age);
		sum = sum +age;

	}
	printf("�ټ����� ��� ���̴� %.1lf�Դϴ�.\n",sum/5.0);//�Ҽ�������

	return 0;
}