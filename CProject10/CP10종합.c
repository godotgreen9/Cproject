
/*
#include<stdio.h>

double get_item(double*)

int main()
{
	double ary[] = { 0.1,0.3,0.5,0.7,0.9 };
	double res;

	res = get_item(ary);
	printf("첫번째 호출할 때 : %.1lf\n", res);//0.1

	res = get_item(ary);
	printf("두번째 호출할 때 : %.1lf\n", res);//0.3
	return 0;
}
double get_item(double* ap)
{
	static int i = 0;
	double temp;

	temp = *(ap + i);
	i++;

	return temp;
}

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
}
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
#include<stdio.h>
//포인터 함수
int* increase();
int num;
int main()
{
	int i;
	int* sp;
	for (i = 0; i < 5; i++)
	{
		sp = increase();
		printf("sum :%d\n", *sp);
		printf("sum :%d\n", *&num);
	}
	return 0;
}
int* increase()
{
	static int sum = 0;
	sum++;
	num = 100;
	//return &sum;//주소를 반환
	return &num;
}
#include<stdio.h>
void exchange();
//
int a, b;//전역변수 공용
int main()
{
	printf("정수값 두 개를 입력하세요 :");
	scanf_s("%d%d", &a, &b);
	exchange();
	printf("a:%d,b:%d\n", a, b);
	return 0;
}
void exchange()
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//동적활당
//변수 선언후 미리 공간 만드는 개념이 아닌
//메모리가 실행 될 때 그때 만드는 개념
//malloc
int main()
{
	int* ip;
	double* dp;
	//int a;
	//ip=&a;
	ip = (int*)malloc(sizeof(int));//4바이트 만든것을 포인터로 접근
	dp = (double*)malloc(sizeof(double));//8;바이트
	*ip = 10;
	*dp = 3.4;
	printf("정수형으로 사용 :%d\n", *ip);
	printf("실수형으로 사용 :%lf\n", *dp);
	free(ip);
	free(dp);
	return 0;
}*/
