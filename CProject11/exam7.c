#include<stdio.h>

int main()
{
	int ary1[5] = { 1,2,3,4,5 };//배열명은 주소값이다
	int ary2[5];
	int i;

	ary2 = ary1;//상수와 상수 대입은 안됨

		for (i = 0; i < 5; i++)
			printf("%d", ary2[2]);
	
	return 0;
}
