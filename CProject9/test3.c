#include <stdio.h>
// watermelon��
// wtreo �� ĭ �ǳ� �پ� ����ϴ� ���

int main()
{
	char* str = "watermelon";//���κ����� ���ڿ� ����
	int i = 0; //0��°���� ����Ͽ� ¦�� ��°�� ���

	while (str[i] != '\0')
	{
		if(i%2==0)//����� ���̸� ¦��
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
}*/
