#include<stdio.h>

int main()
{
	// bmi값 계산 if else

	double weight, height;
	double bmi;

	printf("몸무게를 입력하세요(kg) :");
	scanf_s("%lf", &weight);
	printf("키를 입력하세요(cm) :");
	scanf_s("%lf", &height);
	height = height / 100;
	bmi = weight / (height * height);
	printf("당신의 BMI는 : %.1lf입니다.\n", bmi);
	
	// bmi가 20미만 저체중 20~24.9 표준체중 25이상 과체중
	// if else 이용
	// 
	if (bmi < 20 && bmi>25) //(bmi >= 20.0 && bmi <25.0)
	{

		printf("표준체중입니다.\n");
	}
	else
	{
		printf("체중관리가 필요합니다.\n");
	}
	return 0;
}