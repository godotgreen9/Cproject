#include<stdio.h>

int main()
{
	int ary1[5] = { 1,2,3,4,5 };//�迭���� �ּҰ��̴�
	int ary2[5];
	int i;

	ary2 = ary1;//����� ��� ������ �ȵ�

		for (i = 0; i < 5; i++)
			printf("%d", ary2[2]);
	
	return 0;
}
