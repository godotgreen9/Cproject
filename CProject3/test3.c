#include <stdio.h>

void main()
{
	//����ڷ� ���� ���� �ѱ��ڿ� ���� ���� �Է� ������ ���� �ѱ��ڰ� ����
	//���� ���� ���� ������ �����ϰ� ����� ����ϴ� ���α׷��� �ۼ�
	//a �� ���� ���� b �� ���� ����  c ���� ������ ���� ������ ��
	//�ش��ϴ� �ʴ� ������ ��� "�˼� ���� ���"���� ���

	char ch = 0;
	int x = 0, y = 0;

	scanf_s("%c%d%d", &ch,1,&x,&y);

	//printf("�� ������ �Է��ϼ���");
	//scanf_s("%d%d",&x,&y);

	switch(ch)
	{
	case 'a':
	printf ("x+Y=%d\n",x+y);
	break;
	case 'b':
	printf("x*Y=%d\n",x*y);
	break;
	case 'c':
	printf("x-Y=%d\n",x-y);
	break;
    default:
		puts("�� �� ���� ���");
	}

	return 0;
}
