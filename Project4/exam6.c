#include<stdio.h>

int main()
{
	int a = 0;//
	int b;
	a = a + 1;
	a = a + 1;
	a = a + 1;
	a++;//자기 자신을 증가시킨다 후위연산자(단독은 상관 없으나 후에 증가)
	a++;
	a++;
	++a;//전위연산자 (먼저 증가)
	++a;
	++a;

	printf("%d\n", a);

	b = a++;
	printf("%d\n", b);
	b = ++a;
	printf("%d\n", b);

	return 0;
}
