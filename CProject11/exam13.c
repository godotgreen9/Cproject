#include<stdio.h>
//������ �߰��ξȿ� ����� ����Ÿ���� �̸� �־� ���°� �ʿ��ؼ�
//���α׷� �ۼ��� ���� �ʱ�ȭ �۾�

enum season {spring,summer,fall,winter};//������ ���ڵ� �ƴ� ������ ó��
int main()
{
	enum season ss;//������ �����̶�� Ÿ�� ����ss
	char* cp = NULL;//����ǥ�� ""(�ʱ�ȭ), NULL(�빮������), ������ ������ �ʱ�ȭ�� ���� �̿�
	                //�Ϲ����� ������ �����Ⱚ�� ������� ���ù����� ������ �ȵ��� ��� 
	ss = spring;//���ڿ��� �ƴ� ����
	
	switch (ss)
	{
	case spring:
		cp = "inline";
		break;
	case summer:
		cp = "swimming";
		break;
	case fall:
		cp = "trip";
		break;
	case winter:
		cp = "sking";
		break;
	}
	printf("���� ����Ȱ�� ===>%s\n", cp);
	
	return 0;
}