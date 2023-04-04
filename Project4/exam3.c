#include<stdio.h>

int main()
{

	//반복문 do~while()
	//선처리 후 비교 조건이 안맞아도 처음은 실행
	
	int height = 0;
	int days = 0;
	
	do {
		height = height + 55;
		days = days + 1;

	} while (height <300);
	printf("달팽이가 우물을 올라가는 데 걸린일수:%d\n", days);

	return 0;
}
	
	
	//int num = 0;
	//while (num < 5)
	//{
	//	printf("Hello World! %d\n", num);
	//	//Input --;
	//  um = num + 1;
	//}
	