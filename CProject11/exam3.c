#include<stdio.h>
//
struct cracker
{
	int price;
	int calories;
	char* ap;//����Ʈ����
};

int main()
{
	struct cracker basasak;

	printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� :");
	scanf_s("%d%d", &basasak.price,&basasak.calories );
	//scanf_s("%s", &basasak.ap);//���� ���ڿ��� �Է��� �� ������

	printf("�ٻ���� ���� : %d��\n",basasak.price );
	printf("�ٻ���� ���� : %dKcal\n",basasak.calories);
	
	return 0;
}

