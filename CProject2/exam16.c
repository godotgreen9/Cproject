#include<stdio.h>

int main()
{
	//문자출력시 %자리수를 지정할 수 있다

	printf("1234567890123456789\n");
	
	printf("%10c\n",'A');
	printf("%10d\n", 128);
	printf("%10lf\n", 3.1415926);
	printf("%10le\n", 3.1415926);
	printf("%10.3lf\n", 3.1415926);
	printf("%10.4s\n", "Love is");
	printf("%5lf\n", 3.1415926);

	return 0;
}