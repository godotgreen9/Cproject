
#include<stdio.h>
	/*����� �Է� �� ���ڸ�ŭ ��(*)�� ��� while���� ���� �����ڻ��
  �߰��� �� �ٿ� 5�� �� ��µǵ��� */
int main()
{
	int n=0;
	int i;

	printf("����� �Է��ϼ��� :");
	scanf_s("%d",&n);//13

	i = 0;
	while (i < n)
	{
	    printf("*");
		i++;
		if (i%5 == 0)
			printf("\n");
		}
		
     
		return 0;
 }

	
