#include<stdio.h>

int main()
{
	char str[] = "Good morning!";//�ڵ����� �迭ũ�� ����
	//���ڿ��� ������ null('\0')�� �ڵ����� ���ԵǾ� 14
	printf("�迭 str�� ũ�� : %d\n", sizeof(str));
	printf("�� ���� ������ ��� : %c\n", str[13]);
	printf("�� ���� ������ ��� : %d\n", str[13]);
	printf("�� ���� ������ ��� : %d\n", str[4]);//������ �ƽ�Ű32
	//�迭�� ������ ���� �ִ�

	str[12] = '?'//�迭�� ����� �����ϴ�
	printf("���ڿ� ��� : %s\n", str);

	return 0;
}