#include<stdio.h>
//����ü Ÿ���� �������Ͽ� ���
typedef struct
{
	int num;
	double grade;
}Student;

void data_prn(Student*);

int main()
{
	Student s1 = { 315,4.2 };
	data_prn(&s1);//�ּҰ��� �Ѱ� ��� 

	return 0;
}
void data_prn(Student*sp)//�޴� �Ű����� Ÿ���� Student
{
	printf("�й� : %d\n",sp->num);
	printf("���� : %.1lf\n",sp->grade);
}