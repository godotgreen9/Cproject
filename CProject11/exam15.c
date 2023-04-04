#include<stdio.h>
//구조체 타입을 제정의하여 사용
typedef struct
{
	int num;
	double grade;
}Student;

void data_prn(Student*);

int main()
{
	Student s1 = { 315,4.2 };
	data_prn(&s1);//주소값을 넘겨 줘야 

	return 0;
}
void data_prn(Student*sp)//받는 매개변수 타입은 Student
{
	printf("학번 : %d\n",sp->num);
	printf("학점 : %.1lf\n",sp->grade);
}