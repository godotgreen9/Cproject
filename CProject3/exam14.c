#include<stdio.h>

int main()
{
	// 스위치케이스 (swithch ~case)선택 여러 개중 하나를 선택 P172

	int lot ;

	printf("당첨 번호를 입력하세요:");
	scanf_s("%d", &lot);//정수값 하나 1,2,3 중 하나 break

	switch(lot)//입력된 값
	{
	case 1:
		printf("김서방");
		break;
	case 2:
		printf("홍가네");
		break;
	case 3:
		printf("안산댁");
		break;
	default:
		printf("당첨자가 없습니다");
		break;

	}

	return 0;
}