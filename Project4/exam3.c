#include<stdio.h>

int main()
{

	//�ݺ��� do~while()
	//��ó�� �� �� ������ �ȸ¾Ƶ� ó���� ����
	
	int height = 0;
	int days = 0;
	
	do {
		height = height + 55;
		days = days + 1;

	} while (height <300);
	printf("�����̰� �칰�� �ö󰡴� �� �ɸ��ϼ�:%d\n", days);

	return 0;
}
	
	
	//int num = 0;
	//while (num < 5)
	//{
	//	printf("Hello World! %d\n", num);
	//	//Input --;
	//  um = num + 1;
	//}
	