#include<stdio.h>
/*apple elppa ����Ÿ ������ index �� ���� ȥ������ */

int main()
{
	char word[80];
	int i;
	int count;
	int size;

	printf("�ܾ �Է��ϼ��� :");
	scanf_s("%s", word, 80);//10���ڸ� ������ index�� 9(0����)
	/*
	count = 0;
	while (word[count] != '\0')//!=�����ʴ� �ι��ڰ� �ƴϸ�
	{
		count++;
	}
	*/
	
	/*count = 0;
	size = sizeof(word) / sizeof(word[0]);
	for (i = 0; i < size;i++) {
		if (word[count] != '\0') {
			count++;
		}
	}*/

	for (i = 0; word[i] != '\0'; i++)
		;//apple������ i���� 5
	count = i;

	printf("�ܾ ��������:");
	
	for (i=count-1;i>=0;i--)
	{
		printf("%c", word[i]);
	}
    printf("\n");
	puts(word);//���ڿ��� ����ϴ� �Լ� puts

	return 0;
}