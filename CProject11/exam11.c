
#include<stdio.h>
//�����͸� �̿��� �� ��� ��
struct score
{
	int kor, eng, mat;
};

int main()
{
	struct score a = { 90,80,70 };
	struct score* sp = &a;

	printf("����:%d\n", (*sp).kor);
	printf("����:%d\n", (*sp).eng);
	printf("����:%d\n", (*sp).mat);
	//������� ���� ������
	printf("����:%d\n", sp->kor);
	printf("����:%d\n", sp->eng);
	printf("����:%d\n", sp->mat);

	return 0;

}