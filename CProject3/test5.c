#include<stdio.h>

int main()
{
	// 키보드로 코드번호와 전기사용량을 입력받으면 사용요금을 출력
	// 전기요금 =기본요금+(사용량*kw당 요금)+세금
    // 코드별 적용 기준
	// 구분   코드번호 
	// 가정용     1      1,130원      127.8원     전체금액의 9%


	int code;//코드번호
	int amount;//사용량
	double basic;//기본요금
	double price;//kw당 요금
	double tax_rate; //세금비율
	double total;//전기요금
	double tax; // 세금

	printf("코드 번호를  입력하세요 (1.가정용, 2 산업용,3교육용) :");
	scanf_s("%d", &code);
		;
	printf("전기 사용량을 입력하세요 (1.가정용, 2 산업용,3교육용) :");
	scanf_s("%d", &amount);

	switch (code)
	{
	case 1:
		basic = 1130;
		price = 127.8;
		tax_rate = 0.09;
		break;
	case 2:
		basic = 660;
		price = 88.5;
		tax_rate = 0.08;
		break;
	case 3:
		basic = 370;
		price = 52.0;
		tax_rate = 0.05;
		break;
	}
	total = basic + (amount * price);
	tax = total * tax_rate;//세금계산

	printf("전기 요금은 %.01lf원입니다.\n", total+tax);


	return 0;
}