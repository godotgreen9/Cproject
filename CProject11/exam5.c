#include<stdio.h>
#include<stdlib.h>
//구조체안에 구조체구조

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

	printf("나이를 입력하세요 :");
	scanf_s("%d",&s1.pf.age);
	printf("키를 입력하세요 :");
	scanf_s("%lf",&s1.pf.height );//입력시 %lf 주의
	printf("이름를 입력하세요 :");
	s1.pf.np = (char*)malloc(20);//동적할당이용 메모리 얼로케이션
	scanf_s("%s", s1.pf.np,20);//문자열 입력방법
	
	//s1.pf.np = "홍길동";
	//s1.pf.age = 23;//접근방법
	//s1.pf.height = 187.5;
	//s1.pf.np = "홍길동";
	s1.num = 5;
	s1.grade = 4.4;
	printf("이름 :%s\n", s1.pf.np);
	printf("나이 :%d\n", s1.pf.age);
	printf("키 :%.1lf\n", s1.pf.height);
	printf("학번 :%d\n", s1.num);
	printf("학점 :%.1lf\n", s1.grade);

	free(s1.pf.np);//동적할당 해제

	return 0;
}
