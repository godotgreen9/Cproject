#include<stdio.h>
//
struct cracker
{
	int price;
	int calories;
	char* ap;//포인트변수
};

int main()
{
	struct cracker basasak;

	printf("바사삭의 가격과 열량을 입력하세요 :");
	scanf_s("%d%d", &basasak.price,&basasak.calories );
	//scanf_s("%s", &basasak.ap);//힙에 문자열에 입력은 못 저장함

	printf("바사삭의 가격 : %d원\n",basasak.price );
	printf("바사삭의 열량 : %dKcal\n",basasak.calories);
	
	return 0;
}

