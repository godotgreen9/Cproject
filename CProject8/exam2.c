#include<stdio.h>

//*& 이용하여(주소값 이용하여 배열값을 출력하라

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int i;

	for(i=0; i<5; i++) 
	{
		printf("%d\n", *&ary[i]);
		printf("%d\n", *( & ary[0]+i));
		printf("%d\n", *&ary[0] + i);
	}

	return 0;
}