#include<stdio.h>

//���ڿ��� �迭�� ���·� �����Ǿ� �ִ�

int main()
{
	printf("�ּҰ��� ��� : %p\n", "dream");
	printf("ù��° ���ڸ� ��� : %c\n", *"dream");//*�����ּ��� ���� ���
	printf("����° ���ڸ� ��� : %c\n", *("dream"+2));//*( +)
	printf("����° ���ڸ� ��� : %c\n", "dream" [2]);//[]
	return 0;
}