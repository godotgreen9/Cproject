#include<stdio.h>

/*for�� ����ؼ� ������������*/

int main()
{
	int total = 0;
	int i, num;
	
	printf("0���� num������ ����, num�� ?");
	scanf_s("%d", &num);

	for (i = 0; i <= num; ++i)
	{
		total = total + i;

	}
	printf("0���� %d���� ������� : %d\n", num, total);

	return 0;
}