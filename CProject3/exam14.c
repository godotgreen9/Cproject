#include<stdio.h>

int main()
{
	// ����ġ���̽� (swithch ~case)���� ���� ���� �ϳ��� ���� P172

	int lot ;

	printf("��÷ ��ȣ�� �Է��ϼ���:");
	scanf_s("%d", &lot);//������ �ϳ� 1,2,3 �� �ϳ� break

	switch(lot)//�Էµ� ��
	{
	case 1:
		printf("�輭��");
		break;
	case 2:
		printf("ȫ����");
		break;
	case 3:
		printf("�Ȼ��");
		break;
	default:
		printf("��÷�ڰ� �����ϴ�");
		break;

	}

	return 0;
}