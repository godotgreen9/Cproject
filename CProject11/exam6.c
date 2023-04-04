#include<stdio.h>

struct student
{
	int num;
	char name[20];
	double grade;
};// s1 = { 315,"홍길도",2.4 }; //구조체 선언과 동시에 초기화

int main()
{
	struct student s1 = { 315,"홍길동",2.4 };
	struct student s2 = {237,"이순신",3.7};//주소 저장
	struct student s3 = {330,"세종대왕",4.47 };
	//
	struct student max;//아무것도 연결안된 변수를 보면 타입을 확인
	//같은 student 타입
	max = s1;//max도 s1값을 가리킨다
	if (s2.grade > max.grade)
		max = s2; 
	if (s3.grade > max.grade)
		max = s3;


	printf("학번 :%d\n", max.num);
	printf("이름 :%s\n", max.name);
	printf("학점 :%.1lf\n",max.grade);

	
	return 0;

}
