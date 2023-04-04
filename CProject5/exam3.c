#include<stdio.h>

int add(int nA, int nB)// 3 4
//함수는 변수명 만든 것 같다 () 안 변수는 매개변수 외부로 
//부터 받는 것
{
	int nResult = 0;
	nResult = nA + nB;
	printf("%d\n",nResult);//7

	return nResult; //7  호출한곳으로
}

Void main() //int main()
{
	int nResult = 0;
	nResult = add(3, 4)+10;//함수호출은() 형식
	printf("%d", nResult); //17
	
	//return 0;
}