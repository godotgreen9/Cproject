/* 포인터 가르킨다 대상은 메모리 주소
메모리는 선형구조 1차원  0부터 시작
변수선언 이유 int a 메모리에 4공간 확보 이름은 a
double 8
16진수를 알아야 한다 0-9 10-16

*/
#include<stdio.h>

int main()
{
    char ch=0;
	int num=0;
	int adr = 0;

	//&는 주소 연산자
	printf("ch의 포인터 : %x\n", &ch);//언싸인 부호 
	printf("ch의 포인터 : %x\n", &num);

	adr = &num;//adr은 정수형, num의 주소값은 

	printf("adr=%x", adr);

	return 0;
}