#include<stdio.h>
// 클라스를 받고 클라스를 넘겨 받는 구조 (변수와 함수를 합쳐 놓은것)
//함수 만든는 법 작동 원리 

typedef struct point
{
	int xpos;
	int ypos;

}Point;

void ShowPosition(Point pos)//재정의된 이름을 받아야 접근
{
	printf("[%d,%d]\n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition()//같은 타입 필수
{
	Point cen;
	printf("Input current pos :");
	scanf_s("%d%d", &cen.xpos, &cen.ypos);

	return cen;//반환값이 있나 반환타입은 뭔가 
}
int main()
{
	Point curPos = GetCurrentPosition();//호수함출 넘겨주는값 
	//인자값이 없으면 안쓴다 입력으로
	ShowPosition(curPos);//함수의 호출은()기본 인자값

	return 0;
}
