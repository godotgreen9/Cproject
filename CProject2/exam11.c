#include<stdio.h>

int main()
{
	int employed; // 취업자(160명)
	int graduation; //int graduation; // 졸업자(240명)
	double percentage; // 취업률

	printf("취업자 입력:");
	scanf_s("%d", &employed, &graduation);
	printf("졸업자 입력:");
	scanf_s("%d", &graduation);


	percentage=employed /(double)graduation * 100;//

	printf("취업률은 %1f%%;입니다", percentage);//

	
	return 0;
}