/* #include<stdio.h>
int main()
{
	printf("Welcome to C World");
	return 0;
}
#include<stdio.h>
int main()
{
	printf("%d", 10);//��ȯ���ڿ� %d(decimal)
	printf("\n");//�ٹٲ�
	printf("%d\n", 10 + 20);
	printf("%d\n", 10, 20);
	printf("%d %d\n", 10, 20);//���鵵 ����
	//printf("%d",10);//���鵵 ����
	return 0;
}
//������
//100+100
//200
//�ѱ������ɷ±����� 2030
#include<stdio.h>
int main()
{
	printf("%d", 100);//����ȭprintf("100+100\n"):;
	printf("+");
	printf("%d", 100);
	printf("\n");//�ٹٲ�
	printf("%d\n", 100 + 100);
	printf("=============\n");
	printf("�ѱ������ɷ±����� %d", 2030);
	return 0;
}
// My age :20
// 100 is my point
// Good
// Morning
// everybody
#include<stdio.h>
int main()
{
	printf("My age : %d\n",20);
	printf("%dis my point\n", 100);
	printf("Good\nMorning\nneverybody\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int hap; // ���� ����
	int hap2;
	hap = 10 + 20;
	printf("%d\n", hap);
	hap2 = hap;
	printf("%d", hap2);
	return 0;//���α׷�����
}
#include<stdio.h>
int main()
{
	int num; // ���� ����
	//printf("%d\n", num);���������� ���� ���ָ�  garbage�� ����ִ�
	num = 100;
	printf ("%d,num")
	return 0;//���α׷�����
}
#include<stdio.h>
int main()
{
	int num;
	int num2;
	printf("������ �ϳ��� �Է��ϼ��� :");
	scanf_s("%d", &num);
	printf("�Է� ���� �������� %d�Դϴ�.\n",num);
	printf("������ �ϳ��� �Է��ϼ��� :");
	scanf_s("%d", &num2);
	printf("�Է� ���� �������� %d�Դϴ�.\n", num2);
	//scanf_3("%d%d,&num,&num2);9`
	return 0;
}
// ���� ���� �����ϴ� ���ڴ� : 9
#include<stdio.h>
int main()
{
	printf("���� ���� �����ϴ� ���ڴ� : %d\n", 9);
	return 0;
}
// ��������
// 2002�⿡
// ���ֵǾ����ϴ�
#include<stdio.h>
int main()
{
	printf("��������\n2002�⿡\n���ֵǾ����ϴ�\n");
	return 0;
}
// 4*5=20
// 7*9=63
// ����Ϸ��� �ƹ� Ű�� �����ʽÿ� ...
#include<stdio.h>
int main()
{
	printf("%d*%d=%d\n", 4, 5, 20);
	printf("%d*%d=%d\n", 7, 9, 7*9);
	//printf("4*5= 20\n7*9= 63\n ����Ϸ��� �ƹ� Ű�� �����ʽÿ�...\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int height;
	int weight;
	int cha;//�������𴩶�
	height = 168;
	weight = 48;
	cha = height - weight;//cha�� �� ����
	printf("Ű:%dcm\n",height);//Ű����
	printf("������:%dkg\n", weight);
	printf("Ű���� �����Ը� �� ���� %d�Դϴ�.", cha);
	return 0;
}
#include<stdio.h>

int main()
{
	int employed; // �����(160��)
	int graduation; //int graduation; // ������(240��)
	double percentage; // �����
	printf("����� �Է�:");
	scanf_s("%d", &employed, &graduation);
	printf("������ �Է�:");
	scanf_s("%d", &graduation);
	percentage=employed /(double)graduation * 100;//
	printf("������� %1f%%;�Դϴ�", percentage);//
	return 0;
}
#include<stdio.h>
int main()
{
	printf("�Ҽ����� ��� 10002.0�� ���� ���·� ��� : %le\n", 10002.0);
	printf("�Ҽ����� ��� 0.00625e3�� ���� ���·� ��� : %le\n", 0.00625e3);
	return 0;
}
#include<stdio.h>
int main()
{
	printf("�츮�� ��� \"��! �ʽ� �ڸ���\"�� ���ƽ��ϴ�.\n");
	printf("1.c���� \"/*\"�� \"\"������ �ڵ�� �ּ����� ó���˴ϴ�.\n ");
 	printf("2.���Ĺ��ڴ� '\\'�� �ҹ��ڷ� ����ϴ�.");
	return 0;
}
#include<stdio.h>S

int main()
{
	//������½� %�ڸ����� ������ �� �ִ�
	printf("1234567890123456789\n");
	printf("%10c\n", 'A');
	printf("%10d\n", 128);
	printf("%10lf\n", 3.1415926);
	printf("%10le\n", 3.1415926);
	printf("%10.3lf\n", 3.1415926);
	printf("%10.4s\n", "Love is");
	printf("%5lf\n", 3.1415926);
	return 0;
}
#include<stdio.h>
int main()
{
	//�������� ���� �Է½� ����Ű�� ���ڷ� �ν� �ι�° %�տ� �����̽�
	char ch1, ch2;
	//printf("�ΰ��� ���ڸ� �Է��ϼ���:");
	//scanf_s("%c%c", &ch1,1, &ch2,1);
	printf("ù��° ���ڸ� �Է��ϼ���:");
	scanf_s("%c", &ch1, 1);
	printf("�ι�° ���ڸ� �Է��ϼ���:");
	scanf_s(" %c", &ch2, 1);
	printf("ù��° ����:%c\n", ch1);
	printf("�ι�° ����:%c\n", ch2);
	return 0;
}
#include<stdio.h>
int main()
{
	// �� ������ �Է��ϼ��� ; 10 3
	//������ ������� "10/3= 3.333333"�Դϴ�.
	// ����Ϸ��� �ƹ� Ű�� �����ʽÿ� ...
	int a;
	int b;
	double c;
	printf("�� ������ �Է��ϼ��� :");
	scanf_s("%d%d", &a, &b);
	c = a / (double)b;
	printf("������ �������\"%d/%d\"=%lf �Դϴ�", a, b, c);
	return 0;
}
#include<stdio.h>
int main()
{
	// �̸� ���� ���� Ű �Է� �Է¹���Ȯ��
	char name[80];//�̸�
	char sex;//����
	int age;//����
	double height;//Ű
	printf("�̸��� �Է��ϼ��� :");
	scanf_s("%s", name, 80); //����
	printf("������ �Է��ϼ��� :");
	scanf_s("%d", &age); //����
	printf("������ �Է��ϼ��� :");
	scanf_s(" %c", &sex, 1); //���� \n�� �ٹٲ�
	printf("Ű�� �Է��ϼ��� :");
	scanf_s("%lf", &height); //����
	printf("�̸�:%s,����:%c,����:%d,Ű:%.lf\n", name, sex, age, height);
	return 0;
}*/
