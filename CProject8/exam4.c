#include<stdio.h>

/*�迭�� ��հ��� ���Ͽ� ��� �迭�� ���� ���� ���ϴ� ������ ǥ���� ���
����� �Ҽ��� ���� ��°�ڸ����� ���
double ary[]={1.5,20.1,16.4,2.3,3.5}
��հ� : 8.76
*/

int main()
{
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	double tot = 0;
	double avg;
	int i;
	
	


	for (i = 0; i < 5; i++)
	{
		tot += *(ary + i);
	}
	avg = tot / 5;

	printf("��հ� : %2lf",avg);

	//ary =100; �迭���� ������ ����� �ȵ�
	*ary = *ary + 100;

	printf("%lf\n", *ary);
	printf("%lf\n", ary[0]);

	return 0;
}