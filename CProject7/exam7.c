#include<stdio.h>

void assign(int*);

int main()
{
	int cheoli = 0;//ó��
	
	assign(&cheoli);//�����ּ� ���� �ְ�
	printf("�Լ��� ȣ��� �Ŀ� cheoli�� ����� �� : %d\n", cheoli);

	return 0;// �����͸� ���� �ΰ��� ��� ����
}
/*
void assign()
{
	//cheoli = 100; �Լ��� ������ �����̶� ���� �ʿ�
}
*/

void assign(int*ip)
{
	*ip = 100;//���� �޸𸮰��� ó���� 100�� �ֶ�
}