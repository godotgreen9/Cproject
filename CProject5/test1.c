#include<stdio.h>
/* �Լ��� ����� ������ ���������� ���� ���ȭ
   ���α׷����� ���� ���� ��������� ���� ��ŸƮ �Լ� ���� ����*/
int total(int kor, int eng, int mat)//�Լ������� Ÿ�Ը�
{
	int tot;
	tot = kor + eng + mat;

	return tot;
}

double average(int tot)//��ȯŸ�� ���� �Ǽ�
{
	double avg;
	avg = tot /3.0;

	return avg;
}

int main()
{
	int kor, eng, mat;
	int tot;
	double avg;

	printf("�� ������ ������ �Է��ϼ��� :");
	scanf_s("%d%d%d", &kor, &eng, &mat);
	tot = total(kor, eng, mat);
	avg = average(tot);

	printf("����:%d,���:%.1lf\n", tot, avg);
	
	return 0;
}