#include<stdio.h>

int main()
{
	char ch='A';
	int in=100;
	double db=100.0;

	char* cp = &ch;//������ ������ �׻� �����ּҰ�
	int* ip = &in;
	double* dp = &db;

	printf("%zd,%zd,%zd\n", sizeof(cp), sizeof(ip), sizeof(dp));
	//��� ������ ������ ũ��� ����Ű�� ���̳� 64����Ʈ������ 8����Ʈ
	printf("%d,%d,%d\n", sizeof(*cp), sizeof(*ip), sizeof(*dp));
	//����Ű�� �� ũ�� ����1 ����4 �Ǽ�8

	return 0;

}