#include<stdio.h>

/*�迭 ���� ù ��° �迭��Ҹ� ����Ű�� �����͸� ��ȣȭ�Ѱ��̴�*/
int main()
{
	int ary[] = { 10,20,30,40,50 };
	int i = 0;

	for (i = 0; i < 5; i++)
		printf("%d\n", *(ary + 1));

	return 0;
}