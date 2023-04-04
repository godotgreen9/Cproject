#include<stdio.h>

int main()
{
	// A(90점이상), B(80점이상), C(70점이상), D(60점이상), F(60점미만)
	// 정수 나누기 정수로 앞 값만 지정하여 case문 완성
	int nInput=0;
	char chCredit;
	scanf_s("%d",&nInput); 

	switch (nInput/10)
	{
	case 10:
	case 9:
		chCredit = 'A';
		break;
	case 8:
		chCredit = 'B';
		break;
	case 7:
		chCredit = 'C';
		break;
	case 6:
		chCredit = 'D';
		break;
	default:
		chCredit = 'F';
		break;
		
	}
	printf("당신의 점수는 %d점이고 등급은 %c입니다.\n", nInput, chCredit);
	

	return 0;
}
