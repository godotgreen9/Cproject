#include<stdio.h>
// Ŭ�󽺸� �ް� Ŭ�󽺸� �Ѱ� �޴� ���� (������ �Լ��� ���� ������)
//�Լ� ����� �� �۵� ���� 

typedef struct point
{
	int xpos;
	int ypos;

}Point;

void ShowPosition(Point pos)//�����ǵ� �̸��� �޾ƾ� ����
{
	printf("[%d,%d]\n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition()//���� Ÿ�� �ʼ�
{
	Point cen;
	printf("Input current pos :");
	scanf_s("%d%d", &cen.xpos, &cen.ypos);

	return cen;//��ȯ���� �ֳ� ��ȯŸ���� ���� 
}
int main()
{
	Point curPos = GetCurrentPosition();//ȣ������ �Ѱ��ִ°� 
	//���ڰ��� ������ �Ⱦ��� �Է�����
	ShowPosition(curPos);//�Լ��� ȣ����()�⺻ ���ڰ�

	return 0;
}
