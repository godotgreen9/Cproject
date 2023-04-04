#include<stdio.h>
/*함수란 기능이다 맛을 내자
  특별한 기능을 수행하는 독립된 코드 단위이다
  함수는 호출해야 작동한다 운영제체가 호출 (불러준다)*/

int sum(int a, int b)//사용자정의함수(가로안에 선언되는 것은 매개변수)
{
	int res;
	
	//int a, b;//변수선언

	res = a + b;
	
	return res; //30을 돌려 주면 메인의 sum으로
}

int main()//main 함수앞에는 반환타입 int 사용 없으면 void 사용 
//메인은 시작함수
{
	int a = 10, b = 20;
	int res;
	
	res = sum(a, b);
	printf("결과 : %d\n", res);

	//sum(a,b);//함수 호출 기호(); printf();

	return 0;//1.반환값 0(정수)  2.함수의 종료
}