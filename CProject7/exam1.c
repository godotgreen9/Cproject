/* ������ ����Ų�� ����� �޸� �ּ�
�޸𸮴� �������� 1����  0���� ����
�������� ���� int a �޸𸮿� 4���� Ȯ�� �̸��� a
double 8
16������ �˾ƾ� �Ѵ� 0-9 10-16

*/
#include<stdio.h>

int main()
{
    char ch=0;
	int num=0;
	int adr = 0;

	//&�� �ּ� ������
	printf("ch�� ������ : %x\n", &ch);//����� ��ȣ 
	printf("ch�� ������ : %x\n", &num);

	adr = &num;//adr�� ������, num�� �ּҰ��� 

	printf("adr=%x", adr);

	return 0;
}