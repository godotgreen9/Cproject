#include<stdio.h>

int main()
{
	// A(90���̻�), B(80���̻�), C(70���̻�), D(60���̻�), F(60���̸�)
	// ���� ������ ������ �� ���� �����Ͽ� case�� �ϼ�
	int nInput=0;
	char chCredit;
	scanf_s("%d",&nInput); 

	switch (nInput/10)
	{
	case 10:
	case 9:
		chCredit = 'A';
		break;
	case 8:
		chCredit = 'B';
		break;
	case 7:
		chCredit = 'C';
		break;
	case 6:
		chCredit = 'D';
		break;
	default:
		chCredit = 'F';
		break;
		
	}
	printf("����� ������ %d���̰� ����� %c�Դϴ�.\n", nInput, chCredit);
	

	return 0;
}
