#include<stdio.h>

/*�迭�� �������� ����*/

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int* ap;
	ap = ary[0];//�迭����10
	ap = &ary[0];//�迭���� 0��° �ּҰ�

	//int* ap=ary; ����� ���ÿ�
	//int* ap;//������
	//ap = ary;//�ذ�

	printf("ù��° �迭 ����� �ּҰ� : %p\n", ap);
	printf("ù��° �迭 ����� �ּҰ� : %p\n", ary);
	printf("ù��° �迭 ����� �� : %p\n", *ap);
	//ap=ap+4;
	ap = &ary[0] + 4;
	printf("�ټ���° �迭 ����� �ּҰ� : %p\n", ap);
	printf("�ټ���° �迭 ����� �� : %d\n", *(ap+4));
	
	return 0;
}