#include<stdio.h>

int main()
{
	int height;
	
	int weight;
	int cha;//변수선언누락


	height = 168;
	weight = 48;
	cha = height - weight;//cha의 값 설정
	
	printf("키:%dcm\n",height);//키문자
	printf("몸무게:%dkg\n", weight);
	printf("키에서 몸무게를 뺀 값은 %d입니다.", cha);


	return 0;
}