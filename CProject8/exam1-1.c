#include<stdio.h>

//���ڿ��� �迭�� ���·� �����Ǿ� �ִ�
 
int main()
{
	char str[80] = "dream";//���� �ְ�
	int count = 0;
	int i = 0;
	int size = 0;
	
	while (str[i] != '\0')//���ڿ��� ���� �ƴҋ����� �ݺ�
	{
		count++;
		i++;
	}
	/*size = sizeof(str()) / sizeof(str(0));

	for (i; i <= size; i++)
		count += count;*/

	printf("�迭�� ����� ���ڿ��� ���� : %d\n", count);

	return 0;
}