
#include<stdio.h>
//포인터를 이용한 값 찍는 것
struct score
{
	int kor, eng, mat;
};

int main()
{
	struct score a = { 90,80,70 };
	struct score* sp = &a;

	printf("국어:%d\n", (*sp).kor);
	printf("영어:%d\n", (*sp).eng);
	printf("수학:%d\n", (*sp).mat);
	//간접멤버 참조 연산자
	printf("국어:%d\n", sp->kor);
	printf("영어:%d\n", sp->eng);
	printf("수학:%d\n", sp->mat);

	return 0;

}