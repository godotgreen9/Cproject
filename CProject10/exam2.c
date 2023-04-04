/*
#include<stdio.h>
//지역변수는 함수가 리턴되고 나면 메모리에서 사라진다
//{}함수는 시작과 끝 {} 블록 독립된 범위 정해준다
//지역변수는 블럭을 나가면 메모리에서 없어짐
int main()
{
	int a = 10, b = 20;//메인에서 선언된 지역변수

	printf("바꾸기 전 a :%d, b :%d\n", a, b);
	{
		int temp;//블록 안에서 선언블록 안에서만 쓸수 있다
		temp = a;
		a = b;//전역변수로 본다 블럭 기준으로 사용
		b = temp;
		printf("%d\n", temp);
	}
	printf("바꾼 후 a :%d, b :%d\n", a, b);
	//printf("%d\n", temp);

	return 0;
}*/
#include<stdio.h>
//
int main()
{
	int val = 10;
	{
		int val = 20;
		{
			val++;//변수 선언없이 사용하면 가장 가까운 거리 변수로 이용
		}
		printf("val : %d\n", val);//val값은 21
	}
	printf("val : %d\n", val);//val값은 10
	return 0;
}