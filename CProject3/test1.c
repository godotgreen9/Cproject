#include<stdio.h>

int main()
{
	// ���� ���
	// ��� ������ �Ǽ������� �Է�
	// ����� 90�� �̻��� A, 90�� �̸� 80�� �̻��� B, 80�� �̸� 70���̻� C
	// �� �ܴ� F


	double avg;
	char grade;

	printf("��� ������ �Է��ϼ��� :");
	scanf_s("%lf", &avg);

	if (avg >= 90.0)
		grade = 'A';
	else
		if (avg >= 80)
			grade = 'B';	        
		else
			if (avg >= 70)
				grade = 'C';
	     	else
				grade = 'F';

	          printf("������ %c�Դϴ�.\n", grade);
	
	return 0;
}