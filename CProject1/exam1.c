|/*#include<stdio.h>
//�Լ� �����͸� ����Ͽ� ����� �Լ��� �ݺ������� ȣ���ϱ� p531
int Sum(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}

void main()
{
	int(*p[4])(int, int) = { &Sum,&Sub,&Mul,&Div }, i;
	//�Լ� �����͸� �迭�� �����ϰ� �Լ� ������ int func(int,int)��
	//���� �� �Լ��� �ּ� ���� �����Ѵ�
	char op_table[4] = { '+','-','*','/' };
	//������� ȣ��
	for(i=0; i<4; i++) 
	printf("%d %c %d = %d\n", 8, op_table[i], 2, (*p[i])(8, 2));
	
}
    //8 + 2 = 10
	//8 - 2 = 6
	//8 * 2 = 16
	//8 / 2 = 4
	*/
//fseek �Լ��� ftell �Լ��� ���̳ʸ� ���� ũ�� �˾Ƴ���
#include<stdio.h>

void main()
{
	int file_size = 0;
	FILE* p_file = fopen("tipssoft.dat", "rb");
		if (NULL != p_file)
		{
			fseek(p_file, 0, SEEK_END);
			file_size = ftell(p_file);
			printf("����ũ�� :%d\n", file_size);
			fclose(p_file);
	    }
}