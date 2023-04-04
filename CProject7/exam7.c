#include<stdio.h>

void assign(int*);

int main()
{
	int cheoli = 0;//처리
	
	assign(&cheoli);//시작주소 값을 주고
	printf("함수가 호출된 후에 cheoli에 저장된 값 : %d\n", cheoli);

	return 0;// 포인터를 쓰면 두개도 사용 가능
}
/*
void assign()
{
	//cheoli = 100; 함수는 독립된 공간이라 선언 필요
}
*/

void assign(int*ip)
{
	*ip = 100;//왼쪽 메모리공간 처리에 100를 주라
}