#include<stdio.h>

int main()
{
	// �̸� ���� ���� Ű �Է� �Է¹���Ȯ��

	char name[80];//�̸�
	char sex;//����
	int age;//����
	double height;//Ű

	printf("�̸��� �Է��ϼ��� :");
	scanf_s("%s", name, 80); //����
	printf("������ �Է��ϼ��� :");
	scanf_s("%d", &age); //����
	printf("������ �Է��ϼ��� :");
	scanf_s(" %c", &sex, 1); //���� \n�� �ٹٲ�
	printf("Ű�� �Է��ϼ��� :");
	scanf_s("%lf", &height); //����

	printf("�̸�:%s,����:%c,����:%d,Ű:%.lf\n",name,sex,age,height);


	return 0;
}