/*#include<stdio.h>
// ����ü�� �迭�� �޸� �ٸ� ������ �ڷ����� ��� ó�� �Ҽ� �ִ�
//���� ��ü ���� ����� ����
//��ü�� Ŭ���� ������ ��� �־��
//�ΰ� �̻��� ������ �ϳ��� ���°���
//Struct ���� {}; ��������
//
struct student
{
	int num;
	double grade;//�� 12����Ʈ�� 1���������� ����
};

int main()
{
	struct student s1 = { 0 };//�ʱ�ȭ
	s1.num = 2;
	s1.grade = 2.7;
	printf("���� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);
	printf(" % p\n", s1);
	printf(" % p\n", s1);
	printf(" % p\n", s1);
	return 0;
}
#include<stdio.h>
//
struct profile
{
	int age;
	double height;
	char name[20];
	char* ap;
	//char name[20] = "ȫ�浿"; �迭�� ���ȵ�
};
int main()
{
	struct profile pf;
	pf.age = 10;
	pf.height = 20.5;
	strcpy(pf.name, "�̼���");
	pf.ap = "ȫ�浿";//���ڿ��� heap�� ������� �ٲܼ� ����
	printf("%d\n", pf.age);
	printf("%lf\n", pf.height);
	printf("%s\n", pf.name);
	printf("%s\n", pf.ap);
	//printf("%s\n", pf.name);
	return 0;
}
#include<stdio.h>
//
struct cracker
{
	int price;
	int calories;
	char* ap;//����Ʈ����
};

int main()
{
	struct cracker basasak;
	printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� :");
	scanf_s("%d%d", &basasak.price, &basasak.calories);
	//scanf_s("%s", &basasak.ap);//���� ���ڿ��� �Է��� �� ������
	printf("�ٻ���� ���� : %d��\n", basasak.price);
	printf("�ٻ���� ���� : %dKcal\n", basasak.calories);
	return 0;
}
#include<stdio.h>
//����ü�ȿ� ����ü����

struct profile
{
	int age;
	double height;
	char* np;
};
struct student
{
	struct profile pf;
	int num;
	double grade;
};

int main()
{
	struct student s1;
	s1.pf.age = 23;//���ٹ��
	s1.pf.height = 187.5;
	s1.pf.np = "ȫ�浿";
	s1.num = 5;
	s1.grade = 4.4;
	printf("�̸� :%s\n", s1.pf.np);
	printf("���� :%d\n", s1.pf.age);
	printf("Ű :%.1lf\n", s1.pf.height);
	printf("�й� :%d\n", s1.num);
	printf("���� :%.1lf\n", s1.grade);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
//����ü�ȿ� ����ü����

struct profile
{
	int age;
	double height;
	char* np;
};
struct student
{
	struct profile pf;
	int num;
	double grade;
};

int main()
{
	struct student s1;

	printf("���̸� �Է��ϼ��� :");
	scanf_s("%d", &s1.pf.age);
	printf("Ű�� �Է��ϼ��� :");
	scanf_s("%lf", &s1.pf.height);//�Է½� %lf ����
	printf("�̸��� �Է��ϼ��� :");
	s1.pf.np = (char*)malloc(20);//�����Ҵ��̿� �޸� ������̼�
	scanf_s("%s", s1.pf.np, 20);//���ڿ� �Է¹��

	//s1.pf.np = "ȫ�浿";
	//s1.pf.age = 23;//���ٹ��
	//s1.pf.height = 187.5;
	//s1.pf.np = "ȫ�浿";
	s1.num = 5;
	s1.grade = 4.4;
	printf("�̸� :%s\n", s1.pf.np);
	printf("���� :%d\n", s1.pf.age);
	printf("Ű :%.1lf\n", s1.pf.height);
	printf("�й� :%d\n", s1.num);
	printf("���� :%.1lf\n", s1.grade);
	free(s1.pf.np);//�����Ҵ� ����
	return 0;
}
#include<stdio.h>
struct student
{
	int num;
	char name[20];
	double grade;
};// s1 = { 315,"ȫ�浵",2.4 }; //����ü ����� ���ÿ� �ʱ�ȭ
int main()
{
	struct student s1 = { 315,"ȫ�浿",2.4 };
	struct student s2 = { 237,"�̼���",3.7 };//�ּ� ����
	struct student s3 = { 330,"�������",4.47 };
	//
	struct student max;//�ƹ��͵� ����ȵ� ������ ���� Ÿ���� Ȯ��
	//���� student Ÿ��
	max = s1;//max�� s1���� ����Ų��
	if (s2.grade > max.grade)
		max = s2;
	if (s3.grade > max.grade)
		max = s3;
	printf("�й� :%d\n", max.num);
	printf("�̸� :%s\n", max.name);
	printf("���� :%.1lf\n", max.grade);
	return 0;
}
#include<stdio.h>
int main()
{
	int ary1[5] = { 1,2,3,4,5 };//�迭���� �ּҰ��̴�
	int ary2[5];
	int i;

	ary2 = ary1;//����� ��� ������ �ȵ�

		for (i = 0; i < 5; i++)
			printf("%d", ary2[2]);

	return 0;
}
#include<stdio.h>
struct vision
{
	double left;
	double right;
};
struct vision exchange(struct vision robot);
int main()
{
	struct vision robot;//����ü���� ����
	printf("�κ�Ʈ�� �÷��� �Է��ϼ���(��,��) :");
	//��� ���������ڴ� �ּҿ����ں��� �켱 ������ ����
	scanf_s("%lf%lf", &robot.left, &robot.right);
	robot = exchange(robot);//������ ����� ���� �����ǰ��� ���ο����
	printf("�ٲ� �κ�Ʈ�� �÷�(��,��) :%.1lf,%.1lf\n", robot.left, robot.right);
	return 0;
}
struct vision exchange(struct vision robot)
{
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;
	return robot;
}
#include<stdio.h>
//����ü ����� ��� ������ �ڵ� �ʱ�ȭ��

struct student
{
	int num;
	char name[20];
	int score[5];
	double avg;
};
struct student avg_prn(struct student s);

int main()
{
	struct student s1 = { 315,"ȫ�浿",{82,93,74,90,65} };//�ڵ��ʱ�ȭ
	//printf("name :%.s\n", name);
	//printf("score :%d\n", score[0], score[4]);
	s1 = avg_prn(s1);
	printf("��� :%.1lf\n", s1.avg);

	return 0;
}
struct student avg_prn(struct student s)
{
	int i, sum = 0;

	printf("�й� :%d\n", s.num);
	printf("�̸� :%s\n", s.name);
	printf("���� :");

	for (i = 0; i < 5; i++)
	{
		printf("%5d", s.score[i]);
		sum += s.score[i];
	}
	s.avg = sum / 5.0;
	printf("\n");
	;

	return s;
}
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
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].add);
	}
	return 0;
}


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
#include<stdio.h>

struct profile
{
	char name[20];
	double grade;
	int english;
};

void input_data(struct profile*);
void elite(struct profile*);

int main()
{
	struct profile new_staff[5];
	input_data(new_staff);
	elite(new_staff);

	return 0;
}
void input_data(struct profile* sp)
{
	int i;

	printf("�̸�,����,���� ������ �Է��ϼ���.\n");
	for (i = 0; i < 5; i++)//�迭�� �ε��� ��ŭ �ݺ��ϰڴٴ� ��
	{
		scanf_s("%s%lf%d", (sp + i)->name, 20, &(sp + i)->grade, &(sp + i)->english);//�����ͺ����� ���� *sp
	}
}
void elite(struct profile* sp)
{
	int i;
	//���� 4.0�̻��̰� ��������  900���̻��� �л�
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		if ((sp + i)->grade >= 4.0 && (sp + i)->english >= 900)
			printf("%s,%.1lf,%d\n ", (sp + i)->name, (sp + i)->grade, (sp + i)->english);
	}
}
#include<stdio.h>
//������ �߰��ξȿ� ����� ����Ÿ���� �̸� �־� ���°� �ʿ��ؼ�
//���α׷� �ۼ��� ���� �ʱ�ȭ �۾�

enum season { spring, summer, fall, winter };//������ ���ڵ� �ƴ� ������ ó��
int main()
{
	enum season ss;//������ �����̶�� Ÿ�� ����ss
	char* cp = NULL;//����ǥ�� ""(�ʱ�ȭ), NULL(�빮������), ������ ������ �ʱ�ȭ�� ���� �̿�
	//�Ϲ����� ������ �����Ⱚ�� ������� ���ù����� ������ �ȵ��� ���
	ss = spring;//���ڿ��� �ƴ� ����

	switch (ss)
	{
	case spring:
		cp = "inline";
		break;
	case summer:
		cp = "swimming";
		break;
	case fall:
		cp = "trip";
		break;
	case winter:
		cp = "sking";
		break;
	}
	printf("���� ����Ȱ�� ===>%s\n", cp);

	return 0;
}
#include<stdio.h>
//typed ���� typed struct student Student; struct student ����ü��
//Student������ Ȱ��
struct student
{
	int num;
	double grade;
};
int main()
{
	typedef struct student Student;
	Student s1 :
	return 0;

}
#include<stdio.h>
//����ü Ÿ���� �������Ͽ� ���
typedef struct
{
	int num;
	double grade;
}Student;

void data_prn(Student*);

int main()
{
	Student s1 = { 315,4.2 };
	data_prn(&s1);//�ּҰ��� �Ѱ� ���

	return 0;
}
void data_prn(Student* sp)//�޴� �Ű����� Ÿ���� Student
{
	printf("�й� : %d\n", sp->num);
	printf("���� : %.1lf\n", sp->grade);
}
#include<stdio.h>

typedef int INT;
typedef int* PRT_INT;

typedef unsinged int UNIT;
typedef unsinged int* PTR_UNIT;

typedef unsinged char UCHAR;
typedef unsinged char* PTR_UCHAR;

int main()
{
	INT num1 = 120;
	PTR_INT pnum1 = &num1;

	UNIT num2 = 190;
	PTR_UNIT pnum2 = &num2;

	UCHAR ch = 'z';
	PTR_UNIT pch = &ch;

	printf("%d,%u,%c\n", *pnum1, *pnum2, *pch);


	return 0;
}
#include<stdio.h>
struct point
{
	int xpos;
	int ypos;

};
typedef struct point Point;//������

typedef struct person
{
	char name[20];
	char phoneNumber[20];
	int age;
}Person;//������
int main()
{
	Point pos = { 10,20 };
	Person man = { "ȫ�浿","010-1212-0001",21 };

	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNumber, man.age);
	return 0;
}
#include<stdio.h>
// Ŭ�󽺸� �ް� Ŭ�󽺸� �Ѱ� �޴� ���� (������ �Լ��� ���� ������)
//�Լ� ����� �� �۵� ����

typedef struct point
{
	int xpos;
	int ypos;

}Point;

void ShowPosition(Point pos)//�����ǵ� �̸��� �޾ƾ� ����
{
	printf("[%d,%d]\n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition()//���� Ÿ�� �ʼ�
{
	Point cen;
	printf("Input current pos :");
	scanf_s("%d%d", &cen.xpos, &cen.ypos);

	return cen;//��ȯ���� �ֳ� ��ȯŸ���� ����
}
int main()
{
	Point curPos = GetCurrentPosition();//ȣ������ �Ѱ��ִ°�
	//���ڰ��� ������ �Ⱦ��� �Է�����
	ShowPosition(curPos);//�Լ��� ȣ����()�⺻ ���ڰ�

	return 0;
}
#include<stdio.h>

typedef struct person//���������� ���� ���ִ� ����ü �����
{
	char name[20];
	char phoneNumber[20];
	int age;
}Person;

void ShowPersonInfo(Person man)//�����ϱ� ��¿����� ��������Լ�
{
	printf("name : %s\n", man.name);
	printf("phone : %s\n", man.phoneNumber);
	printf("age : %d\n", man.age);
}
Person ReadPersonInfo()//�Է��̶� �޴� ���� ����
{
	Person man; //��������

	printf("name");
	scanf_s("%s", man.name, 20);//�迭�̶� �Ⱥ���
	printf("phone");
	scanf_s("%s", man.phoneNumber, 20);
	printf("age");
	scanf_s("%d", &man.age);//������ ������ �ּҿ����� ����

	return man;
}
int main()
{
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);

	return 0;
}
#include<stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

int main()
{
	Point pos1 = { 1,2 };
	Point pos2;
	pos2 = pos1; //����

	printf("ũ�� : %d\n", sizeof(pos1));
	printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
	printf("ũ�� : %d\n", sizeof(pos2));
	printf("[%d, %d]\n", pos2.xpos, pos2.ypos);

	return 0;
}
#include<stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

Point Addpoint(Point pos1, Point pos2)
{
	Point pos = { pos1.xpos + pos2.xpos,pos1.ypos + pos2.ypos };

	return pos;
}
Point Minpoint(Point pos1, Point pos2)
{
	Point pos = { pos1.xpos - pos2.xpos,pos1.ypos - pos2.ypos };

	return pos;
}
int main()
{
	Point pos1 = { 5,6 };
	Point pos2 = { 2,9 };

	Point result;
	result = Addpoint(pos1, pos2);
	printf("[%d,%d]\n", result.xpos, result.ypos);
	result = Minpoint(pos1, pos2);
	printf("[%d,%d]\n", result.xpos, result.ypos);

	return 0;
}*/