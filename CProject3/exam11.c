#include<stdio.h>

int main()
{
	// 1.6�� ������ ��̿� 70�� �̻��� ����� ��������
	// 2.�� �ܿ��� 3,000�� ����Ḧ �޴´�

	int age;

	printf("���̸� �Է��ϼ��� :");
	scanf_s("%d", &age);
		
	if (age =<6||age >=70)
	{
		printf("���������Դϴ�.");
	}
	else
	{
		printf("������ 3,000��.");
	}
	return 0;
}