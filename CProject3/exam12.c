#include<stdio.h>

int main()
{
	// bmi�� ��� if else

	double weight, height;
	double bmi;

	printf("�����Ը� �Է��ϼ���(kg) :");
	scanf_s("%lf", &weight);
	printf("Ű�� �Է��ϼ���(cm) :");
	scanf_s("%lf", &height);
	height = height / 100;
	bmi = weight / (height * height);
	printf("����� BMI�� : %.1lf�Դϴ�.\n", bmi);

	// bmi�� 20�̸� ��ü�� 20~24.9 ǥ��ü�� 25�̻� ��ü��
	// if else �̿�
	// ��ü�� ��ü������ �з�
	
	if (bmi >= 20.0 && bmi < 25.0)
		printf("ǥ��ü���Դϴ�.\n");
	else
		if (bmi < 20.0)
			printf("��ü���Դϴ�.");
		else
			printf("��ü���Դϴ�");

	return 0;
}