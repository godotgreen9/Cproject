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
}
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
#include<stdio.h>
//call by value:값을 넘겨주는 방법

int add_ten(int);

int main()
{
	int a = 10;
	a = add_ten(a);
	printf("a :%d\n", a);//a는 20

	return 0;
}
int add_ten(int b)
{
	b = b + 10;

	return b;
}
#include<stdio.h>
//call by reference: 주소를 넘겨주는 방법
void add_ten(int*);
int main()
{
	int a = 10;
	add_ten(&a);
	printf("a :%d\n", a);
	return 0;
}
void add_ten(int* b)//return이 필요없다
{
	*b = *b + 10;
}*/

#include<stdio.h>
//object file은 반기계어
//컴파일이 static이 붙은 것으로 최우선

void increase();
int num = 100;//static num으로 간주

int main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		increase();
	}
	printf(" % d\n", num);
	return 0;
}

void increase()
{
	static int sum = 0;//정적변수static 별도공간
	sum++;
	printf("sum :%d\n", sum);//1,2,3,4,5
}