#include<stdio.h>
#include<string.h>
//�̸��� �Է��ϼ��� :���ѹα�
//��ȭ��ȣ�� �Է�: 000-000-0000
//�ּ�: ���ѹα� ����� ���ﵿ 000����

int main()
{ 
	char name[10] = { 0 };
	char tel[20] = { 0 };
	char add[50] = { 0 };
	char str[80] = { 0 };//�ݵ�� �ʱ�ȭ

	printf("�̸��� �Է��ϼ��� : ");
	gets(name);//get������ ������ �ڵ����� ���̴� ���
	strcat_s(str,sizeof(str), name);//�Է��� ����
	strcat_s(str,sizeof(str), ",");
	printf("��ȭ��ȣ�� �Է��ϼ��� : ");
	gets(tel);
	strcat_s(str,sizeof(str), tel);
	strcat_s(str,sizeof(str), ",");
	printf("�ּҸ� �Է��ϼ��� : ");
	gets(add);
	strcat_s(str,sizeof(str), add);
	
	puts(str);

	return 0;
}
	
/*#include<stdio.h>
#include<string.h>
int main()
//while, get,
//c����/ ���α׷� �����/ �⺻�̴� /��
{
	char novel[800] = { 0 };
	char str_in[80] = { 0 };
	while (1)//���ѷ��� while(1)
	{
		printf("���ڿ��� �Է��ϼ���");
		gets(str_in);
		if (strcmp(str_in, "��") == 0)
			break;
		strcat_s(novel, sizeof(novel), str_in);
		strcat_s(novel, sizeof(novel), " ");
		printf("��������� �ٰŸ� :");
		puts(novel);
		puts("\n");
	}
	/*while (strcmp(str_in, "��") != 0)
	{
		gets(str_in);
		strcat_s(novel, sizeof(novel), str_in);
		puts(novel);
	}
	return 0;
}
#include<stdio.h>
// if ���� �̿��� �Է� �������� ���� �� �ƿ�ǲ
int main()
{
	char season[80];//
	printf("�������� �Է��ϼ��� :");
	scanf_s("%s", season, 80);//���ڹ迭�� s, �迭���� ""�Ⱥ���
	//printf("������\n");//��
	//printf("���\n");//����
	printf("��ȭ\n");//����
	printf("��ȭ\n");//�ܿ�
	printf("�������� �߸� �Է��Ͽ����ϴ�\n");

	if (strcmp(season, "��") == 0)
		printf("������\n");
	else if (strcmp(season, "����") == 0)
		printf("���\n");
	else if (strcmp(season, "����") == 0)
		printf("��ȭ\n");
	else if (strcmp(season, "�ܿ�") == 0)
		printf("��ȭ\n");
	else
		printf("�������� �߸� �Է��Ͽ����ϴ�\n");

	return 0;
}

#include<stdio.h>
#include<string.h>
//string len�� ���Ͽ� ���� ����
int main()
{
	char str1[80] = "Long time no see";
	char str2[80] = "What's up?";
	int len;
	if (strlen(str1) > strlen(str2))
	   printf("%s\n ", str1);
	else
	   printf("%s\n", str2);
	return 0;
}
#include<stdio.h>
//�Լ� user-strcpy�� ����� �迭�� �Ѱ� �迭 ������ ���ֱ�
//�����ͺ����̿�
void user_strcpy(char* des, char* scr);//�Լ� �������
int main()
{
	char fruit[20];//�迭����
	user_strcpy(fruit, "strawberry");//�Լ� �迭��� ���ڿ� �Ѱ�
	printf("�迭�� ����� ���ڿ� :%s\n", fruit);
	return 0;
}
void user_strcpy(char* des, char* scr)//�Լ��ȿ��� �Ű����� ��������
//�����ͺ����� ���� (�ּ�,strawberry)
{
	while (*scr != '\0')
	{
		*des = *scr;
		scr++;
		des++;
	}
	*des = *scr;// *des='\0';
	//���ڿ� ���� �ݵ�� �� ���ڰ� ���ԵǾ�� �Ѵ�
}
#include <stdio.h>
// watermelon��
// wtreo �� ĭ �ǳ� �پ� ����ϴ� ���
int main()
{
	char* str = "watermelon";//���κ����� ���ڿ� ����
	int i = 0; //0��°���� ����Ͽ� ¦�� ��°�� ���
	while (str[i] != '\0')
	{
		if (i % 2 == 0)//����� ���̸� ¦�� �ƴϸ� Ȧ��
			printf("%c", str[i]);
		i++;
	}
	return 0;
}
/*#include<stdio.h>
int main()
{
	int age;
	char* greeting;
	printf("���̸� �Է��ϼ��� :");
	scanf_s("%d", &age);
	if (age > 30)
		greeting = "ó�� �˰ڽ��ϴ�.";//ó���˰ڽ��ϴ�
	else
		greeting = "�ݰ�����";//"�ݰ�����"
	printf("�λ縻 :%s\n", greeting);
	return 0;
}
#include<stdio.h>
/*strawberry
  trawberry
  rawberry
  awberry
  wberry
  erry
  rry
  ry
  y
int main()
{
	char* fruit = "strawberry";
	while (*fruit != '\0')
	{
		printf("%s\n", fruit);//s %s ���ڿ� ó���� ���θ� �迭��
		fruit++;
	}
	return 0;
}
/*#include<stdio.h>
//���ڿ��� �迭�� ���·� �����Ǿ� �ִ�
  �迭�� ��ü ������� ������ƶ�
  �迭�� ���� index�� ���� index�� �����Ͽ� ���� �ټ� �ִ�
  �迭���� �� �����ּ��̴�
int main()
{
	char str[80] = "dream";//���� �ְ�
	int count = 0;
	int i = 0;
	while (str[i] != '\0')//���ڿ��� ���� �ƴҋ����� �ݺ�
	{
		count++;
		i++;
	}
	printf("�迭�� ����� ���ڿ��� ���� : %d\n", count);
	return 0;
}
#include<stdio.h>
//���ڿ��� �迭�� ���·� �����Ǿ� �ִ�
int main()
{
	printf("�ּҰ��� ��� : %p\n", "dream");
	printf("ù��° ���ڸ� ��� : %c\n", *"dream");//*�����ּ��� ���� ���
	printf("����° ���ڸ� ��� : %c\n", *("dream" + 2));//*( +)
	printf("����° ���ڸ� ��� : %c\n", "dream"[2]);//[]
	return 0;
}
#include<stdio.h>
int main()
{
	char* name;
	name = "Hong gildong";
	printf("�̸� : %s\n", name);//�������� p������ ���ۺ����� ����Ű���ְ�
	printf("������° ���� : %c\n", name[5]);//�迭ǥ���� ����
	return 0;
}
#include<stdio.h>
����(LIFO)�� �� ����(��ü������ ����)
  ������ ����Ҽ� �ִ� ���� �迭���� ���� (���� �����ּҰ��� �������ִ�)
  ���� �ä���� ����ϴ� ���� ���ٸ� ������ ���� �����Ҽ� �ִ� ���� ������
  ���� �ּҷθ� ���� �����ϴ�
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
#include<stdio.h>
//�迭���� ������̴� �ּ��� ����Ű��
int main()
{
	//char* fruit = "stawberry"; OK
	//char fruit[20] ="stawberry";OK �迭����� ���ÿ� ���ڿ� ����
	char fruit[20];
	fruit = "strawberry";// ������ �ƴ� �迭�� �����(�ּҿ��� ���ڿ�����)
	printf("%s\n", fruit);
	return 0;
}
#include<stdio.h>
//���ڿ� ó���Լ� ���̺귯�� �Լ� �����ӿ�ũ(���� ���� ���� ��)
//string copy,string length,string compare,
//string concater
int main()
{
	char str1[20] = "apple";
	char str2[20] = "banana";
	char temp[20];
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("str1 :%s\n", str1);
	printf("str2 :%s\n", str2);
	return 0;
}
#include<stdio.h>
//�Լ��� �̿��� ��
void swap_string(char* s1, char* s2);
int main()
{
	char str1[20] = "apple";
	char str2[20] = "banana";
	swap_string(str1, str2);
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);
}
void swap_string(char* s1, char* s2)
{
	char temp[20];
	strcpy(temp, s1);
	strcpy(s1, s2);
	strcpy(s2, temp);
}
#include<stdio.h>
#include<string.h>
//
int main()
{
	char fruit[80] = "apple";
	char* strp = "banana";
	int len;
	len = strlen(fruit);
	printf("���ڿ��� ���� : %d\n", len);//5 �� ����
	len = strlen(strp);
	printf("���ڿ��� ���� : %d\n", len);//6 �� ����
	return 0;
}
#include<stdio.h>
//���ڿ� ó���Լ� ���̺귯�� �Լ� �����ӿ�ũ(���� ���� ���� ��)
//string compare ���ڿ� �� �Լ�,
int main()
{
	char str1[20] = "banana";
	char str2[20] = "apple";
	char temp[20];
	int res;
	res = strcmp(str1, str2);
	//�� ���ڿ��� ���Ͽ� �����ϴ� ��(��������)
	//b �ϰ� a ��
	//str1>str2:1 str1<str2:-1 str1==str2 : 0
	if (res > 0)
	{
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);
	}
	printf("str1 :%s\n", str1);
	printf("str2 :%s\n", str2);
	return 0;
}
#include<stdio.h>
#include<string.h>
//���ڿ� ����
int main()
{
	char fruit[80] = "straw";
	strcat_s(fruit, sizeof(fruit), "berry");
	printf("����� ���ڿ� : %s\n", fruit);
	return 0;
}
#include<stdio.h>
//���ڿ� �Է½� ���� ���Եɼ� ������
//scnaf�� ������ ���ڿ� ������ ���
//��ĭ�� ���Ե� ���ڿ��� gets�̿�
//puts�� ���ڿ��� ����ϴ� ���� ����� ����
int main()
{
	char str[80];
	printf("���ڿ��� �Է��ϼ��� ;");
	scanf_s("%s", str, 80);
	printf("�Էµ� ���ڿ� : %s\n", str);//
	gets(str);//���� ���ĸ� �ν�
	printf("�Էµ� ���ڿ� : %s\n", str);
	//puts("�Էµ� ���ڿ� : %s\n",str);���Ŀ���
	puts(str);
	return 0;
}*/