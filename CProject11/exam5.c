#include<stdio.h>
#include<stdlib.h>
//����ü�ȿ� ����ü����

struct profile
{
	int age;
	double height;
	char* np;
};
struct student
{
	struct profile pf;
	int num;
	double grade;
};

int main()
{
	struct student s1;

	printf("���̸� �Է��ϼ��� :");
	scanf_s("%d",&s1.pf.age);
	printf("Ű�� �Է��ϼ��� :");
	scanf_s("%lf",&s1.pf.height );//�Է½� %lf ����
	printf("�̸��� �Է��ϼ��� :");
	s1.pf.np = (char*)malloc(20);//�����Ҵ��̿� �޸� ������̼�
	scanf_s("%s", s1.pf.np,20);//���ڿ� �Է¹��
	
	//s1.pf.np = "ȫ�浿";
	//s1.pf.age = 23;//���ٹ��
	//s1.pf.height = 187.5;
	//s1.pf.np = "ȫ�浿";
	s1.num = 5;
	s1.grade = 4.4;
	printf("�̸� :%s\n", s1.pf.np);
	printf("���� :%d\n", s1.pf.age);
	printf("Ű :%.1lf\n", s1.pf.height);
	printf("�й� :%d\n", s1.num);
	printf("���� :%.1lf\n", s1.grade);

	free(s1.pf.np);//�����Ҵ� ����

	return 0;
}
