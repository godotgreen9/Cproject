#include<stdio.h>

int main()
{
	int employed; // �����(160��)
	int graduation; //int graduation; // ������(240��)
	double percentage; // �����

	printf("����� �Է�:");
	scanf_s("%d", &employed, &graduation);
	printf("������ �Է�:");
	scanf_s("%d", &graduation);


	percentage=employed /(double)graduation * 100;//

	printf("������� %1f%%;�Դϴ�", percentage);//

	
	return 0;
}