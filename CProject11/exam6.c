#include<stdio.h>

struct student
{
	int num;
	char name[20];
	double grade;
};// s1 = { 315,"ȫ�浵",2.4 }; //����ü ����� ���ÿ� �ʱ�ȭ

int main()
{
	struct student s1 = { 315,"ȫ�浿",2.4 };
	struct student s2 = {237,"�̼���",3.7};//�ּ� ����
	struct student s3 = {330,"�������",4.47 };
	//
	struct student max;//�ƹ��͵� ����ȵ� ������ ���� Ÿ���� Ȯ��
	//���� student Ÿ��
	max = s1;//max�� s1���� ����Ų��
	if (s2.grade > max.grade)
		max = s2; 
	if (s3.grade > max.grade)
		max = s3;


	printf("�й� :%d\n", max.num);
	printf("�̸� :%s\n", max.name);
	printf("���� :%.1lf\n",max.grade);

	
	return 0;

}