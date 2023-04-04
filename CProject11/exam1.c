#include<stdio.h>
// 구조체는 배열과 달리 다른 형태의 자료형도 묶어서 처리 할수 있다
//현재 객체 지향 언어의 원조
//객체와 클라스의 개념은 잡고 있어야
//두개 이상의 변수를 하나로 묶는개념
//Struct 변수 {}; 구조형식
//
struct student
{
	int num;
	double grade;//총 12바이트가 1차원구조로 묶임 
};

int main()
{
	struct student s1 = { 0 };//초기화
	s1.num = 2;
	s1.grade = 2.7;

	printf("학점 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);
	printf(" % p\n", s1);
	printf(" % p\n", s1);
	printf(" % p\n", s1);

	return 0;
}