#include<stdio.h>

int add(int nA, int nB)// 3 4
//�Լ��� ������ ���� �� ���� () �� ������ �Ű����� �ܺη� 
//���� �޴� ��
{
	int nResult = 0;
	nResult = nA + nB;
	printf("%d\n",nResult);//7

	return nResult; //7  ȣ���Ѱ�����
}

Void main() //int main()
{
	int nResult = 0;
	nResult = add(3, 4)+10;//�Լ�ȣ����() ����
	printf("%d", nResult); //17
	
	//return 0;
}