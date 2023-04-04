#include<stdio.h>

/*배열 명은 첫 번째 배열요소를 가르키는 포인터를 기호화한것이다*/
int main()
{
	int ary[] = { 10,20,30,40,50 };
	int i = 0;

	for (i = 0; i < 5; i++)
		printf("%d\n", *(ary + 1));

	return 0;
}