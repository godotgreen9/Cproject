#include<stdio.h>
/*����(LIFO)�� �� ����(��ü������ ����)
  ������ ����Ҽ� �ִ� ���� �迭���� ���� (���� �����ּҰ��� �������ִ�)
  ���� �ä���� ����ϴ� ���� ���ٸ� ������ ���� �����Ҽ� �ִ� ���� ������
  ���� �ּҷθ� ���� �����ϴ�
  */
int main()
{
	char str1[] = "My String";
	char* str2 = "Your String";

	printf("%s %s\n", str1, str2);

	str2 = "Our String";//
	printf("%s %s\n", str1, str2);

	str1[0] = 'X';//���� ���� �ٲܼ� ����, �����Ұ�
	printf("%s %s\n", str1, str2);

	str2[0] = 'X';
	printf("%s %s\n", str1, str2);

	return 0;
}
