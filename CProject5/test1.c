#include<stdio.h>
/* 함수를 만드는 이유는 유지관리가 용이 모듈화
   프로그램실행 순서 주의 통상적으로 메인 스타트 함수 선언 먼저*/
int total(int kor, int eng, int mat)//함수선언후 타입만
{
	int tot;
	tot = kor + eng + mat;

	return tot;
}

double average(int tot)//반환타입 주의 실수
{
	double avg;
	avg = tot /3.0;

	return avg;
}

int main()
{
	int kor, eng, mat;
	int tot;
	double avg;

	printf("세 과목의 점수를 입력하세요 :");
	scanf_s("%d%d%d", &kor, &eng, &mat);
	tot = total(kor, eng, mat);
	avg = average(tot);

	printf("총점:%d,평균:%.1lf\n", tot, avg);
	
	return 0;
}