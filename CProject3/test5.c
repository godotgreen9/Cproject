#include<stdio.h>

int main()
{
	// Ű����� �ڵ��ȣ�� �����뷮�� �Է¹����� ������� ���
	// ������ =�⺻���+(��뷮*kw�� ���)+����
    // �ڵ庰 ���� ����
	// ����   �ڵ��ȣ 
	// ������     1      1,130��      127.8��     ��ü�ݾ��� 9%


	int code;//�ڵ��ȣ
	int amount;//��뷮
	double basic;//�⺻���
	double price;//kw�� ���
	double tax_rate; //���ݺ���
	double total;//������
	double tax; // ����

	printf("�ڵ� ��ȣ��  �Է��ϼ��� (1.������, 2 �����,3������) :");
	scanf_s("%d", &code);
		;
	printf("���� ��뷮�� �Է��ϼ��� (1.������, 2 �����,3������) :");
	scanf_s("%d", &amount);

	switch (code)
	{
	case 1:
		basic = 1130;
		price = 127.8;
		tax_rate = 0.09;
		break;
	case 2:
		basic = 660;
		price = 88.5;
		tax_rate = 0.08;
		break;
	case 3:
		basic = 370;
		price = 52.0;
		tax_rate = 0.05;
		break;
	}
	total = basic + (amount * price);
	tax = total * tax_rate;//���ݰ��

	printf("���� ����� %.01lf���Դϴ�.\n", total+tax);


	return 0;
}