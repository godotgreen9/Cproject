#include<stdio.h>

	/* Ű����� ���� ����� �ݺ������� �Է� �����鼭 �� ���� ��� �̰�����
	������ �Է� �ɶ����� �ݺ��Ѵ�.ó������ ������ �ԷµǸ� �ٷ� ����*/

int main()
{
	int n=0;
	int sum = 0;

	scanf_s("%d", &n);
	while (n>=0) {
		sum = sum + n;
		printf("���ݱ��� �Էµ� ���� �� : %d\n", sum);

		printf("����� �Է��ϼ��� :");
		scanf_s("%d", &n);
	}

	return 0;
}
