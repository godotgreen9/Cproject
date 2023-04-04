#include<stdio.h>

typedef int INT;
typedef int* PRT_INT;

typedef unsinged int UNIT;
typedef unsinged int* PTR_UNIT;

typedef unsinged char UCHAR;
typedef unsinged char* PTR_UCHAR;



int main()
{
	INT num1 = 120;
	PTR_INT pnum1 = &num1;

	UNIT num2 = 190;
	PTR_UNIT pnum2 = &num2;

	UCHAR ch = 'z';
	PTR_UNIT pch = &ch;

	printf("%d,%u,%c\n", *pnum1, *pnum2, *pch);


	return 0;
}


