#include<stdio.h>

/*배열과 포인터의 관계*/

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int* ap;
	ap = ary[0];//배열에서10
	ap = &ary[0];//배열에서 0번째 주소값

	//int* ap=ary; 선언과 동시에
	//int* ap;//선언후
	//ap = ary;//준거

	printf("첫번째 배열 요소의 주소값 : %p\n", ap);
	printf("첫번째 배열 요소의 주소값 : %p\n", ary);
	printf("첫번째 배열 요소의 값 : %p\n", *ap);
	//ap=ap+4;
	ap = &ary[0] + 4;
	printf("다섯번째 배열 요소의 주소값 : %p\n", ap);
	printf("다섯번째 배열 요소의 값 : %d\n", *(ap+4));
	
	return 0;
}