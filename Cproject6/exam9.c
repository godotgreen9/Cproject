#include<stdio.h>
/*�迭���� ���ڿ� ó�����*/

int main()
{
	char str[50] = "I like C programming";//���鵵 �������
	//null ���� �ڵ����� ä������
	char str2[10];//�⺻�� �����Ⱚ

	printf("string:%s\n", str);
	printf("string:%c\n", str[19]);//g
	printf("string:%c\n", str[20]);//�ι��� �׷��� ������ �� �ȳ���
	printf("string:%c\n", str[21]);

	printf("string:%s\n", str2);//�����Ⱚ

	str[8] = '\0';//�� ���ڴ� ���ڿ��� ���� �ǹ��Ѵ�
	printf("string:%s\n", str);
	str[6] = '\0';//�� ���ڴ� ���ڿ��� ���� �ǹ��Ѵ�
	printf("string:%s\n", str);
	str[1] = '\0';//�� ���ڴ� ���ڿ��� ���� �ǹ��Ѵ�
	printf("string:%s\n", str);
	
	return 0;

}