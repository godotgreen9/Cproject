#include<stdio.h>


struct address
{
	char name[20];
	int age;
	char tel[20];
	double add[80];
};

int main()
{
	struct address list[5] = 
	{ 
	{"ȫ�浿",23,"010-111-1111","�︪�� ����"},
	{"�̼���",35,"010-222-2222","���� ��õ��"},
	{"�庸��",19,"010-333-3333","�ϵ� û����"},
	{"������",15,"010-444-4444","�泲 õ��"},
	{"���߱�",45,"010-555-5555","Ȳ�ص� ����"}
	};//�ۿ� ���δ� �迭�ʱ�ȭ ���� ����ü �ʱ�ȭ ����
	
	int i;
	for (i = 0; i < 5; i++)
	{
	  printf("%10s%5d%15s%20s\n",list[i].name, list[i].age, list[i].tel, list[i].add);
	}
	return 0;
}
