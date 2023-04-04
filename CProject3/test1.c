#include<stdio.h>

int main()
{
	// 학점 계산
	// 평균 점수는 실수값으로 입력
	// 평균이 90점 이상은 A, 90점 미만 80점 이상은 B, 80점 미만 70점이상 C
	// 그 외는 F


	double avg;
	char grade;

	printf("평균 점수를 입력하세요 :");
	scanf_s("%lf", &avg);

	if (avg >= 90.0)
		grade = 'A';
	else
		if (avg >= 80)
			grade = 'B';	        
		else
			if (avg >= 70)
				grade = 'C';
	     	else
				grade = 'F';

	          printf("학점은 %c입니다.\n", grade);
	
	return 0;
}