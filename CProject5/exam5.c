#include<stdio.h>

/*�Լ�����  1.��ȯŸ���� �ִ� ��int Add(�Ű� ���� 2�� �ʿ�)
2.��ȯŸ�� ���°�(�Ű����� �ְ� ��¸�) 3.�Ű� ���� ���� ��
4.��ȯŸ�� �Ű����� ���� ��(�ܼ���¸�)*/


int Add(int num1, int num2)
{
	return num1 + num2;
}
void ShowAddResult(int result)
{
	printf("���� ��� ��� : %d\n", result);
}
int ReadNum(void)
{
	int num;
	scanf_s("%d", &num);
	return num;
}
void HowToUseThisProg(void)
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�");
	printf("��! �׷� �� ���� ������ �Է��ϼ���,\n");
}

int main()
{
	int result, num1, num2;
	
	HowToUseThisProg();
	
	num1=ReadNum();
	num2=ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);


	return 0;
}