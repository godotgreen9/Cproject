#include<stdio.h>
// ����ü�� �迭�� �޸� �ٸ� ������ �ڷ����� ��� ó�� �Ҽ� �ִ�
//���� ��ü ���� ����� ����
//��ü�� Ŭ���� ������ ��� �־��
//�ΰ� �̻��� ������ �ϳ��� ���°���
//Struct ���� {}; ��������
//
struct student
{
	int num;
	double grade;//�� 12����Ʈ�� 1���������� ���� 
};

int main()
{
	struct student s1 = { 0 };//�ʱ�ȭ
	s1.num = 2;
	s1.grade = 2.7;

	printf("���� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);
	printf(" % p\n", s1);
	printf(" % p\n", s1);
	printf(" % p\n", s1);

	return 0;
}