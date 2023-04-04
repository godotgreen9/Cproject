#include<stdio.h>
//열거형 중가로안에 사용할 데이타값을 미리 넣어 놓는것 필요해서
//프로그램 작성시 주의 초기화 작업

enum season {spring,summer,fall,winter};//변수도 문자도 아닌 값으로 처리
int main()
{
	enum season ss;//열거형 시즌이라는 타입 변수ss
	char* cp = NULL;//공백표시 ""(초기화), NULL(대문자주의), 포인터 변수의 초기화시 많이 이용
	                //일반적인 변수는 쓰레기값이 들어있음 선택문들은 선택이 안됐을 경우 
	ss = spring;//문자열도 아님 주의
	
	switch (ss)
	{
	case spring:
		cp = "inline";
		break;
	case summer:
		cp = "swimming";
		break;
	case fall:
		cp = "trip";
		break;
	case winter:
		cp = "sking";
		break;
	}
	printf("나의 레저활동 ===>%s\n", cp);
	
	return 0;
}