#include<stdio.h>
//�迭���� ������̴� �ּ��� ����Ű��
int main()
{
	//char* fruit = "stawberry"; OK
	//char fruit[20] ="stawberry";OK �迭����� ���ÿ� ���ڿ� ����
	char fruit[20];
	fruit ="strawberry";// ������ �ƴ� �迭�� �����(�ּҿ��� ���ڿ�����)
	
	printf("%s\n", fruit);

	return 0;

}