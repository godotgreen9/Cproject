#include<stdio.h>

int main()
{
	char word[80];
	int i;

	printf("�ܾ �Է��ϼ���");
	scanf_s("%s", word, 80);//&�� ������ �ʴ´�
	i = 0;
	//scanf�Լ��� ���ڿ� �Է��� ������ �ڵ����� �ι��ڸ� ä���ش�

	while (word[i]!='\0')//!=�����ʴ� �ι��ڰ� �ƴϸ�
	{
		i++;

	}
	printf("%s �ܾ��� ���̴� %d���Դϴ�.\n", word, i);

	return 0;
}