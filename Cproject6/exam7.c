#include<stdio.h>
/*���� ���ڿ� ǥ�� ��� �迭����� �����ְ� ���� */
int main()
{
	char word[40];//��������� ���� �ʿ�
	int i = 0;
	int size;

	size = sizeof(word) / sizeof(word[0]);

	word[0] = 'L';
	word[1] = 'O';
	word[2] = 'V';
	word[3] = 'E';
	word[4] = '\0';//null �������� �ν� ���

	printf("%s\n", word);//s��string(���ڿ�,�߿�)�� ���ڳ� �ν� �ҷ�
	printf("%zd\n", sizeof(char));

	for (i = 0; i < size; i++)
	  printf("%c", word[i]);//������½� C


	return 0;
}