#include<stdio.h>
struct point
{
	int xpos;
	int ypos;

};
typedef struct point Point;//재정의

typedef struct person
{
	char name[20];
	char phoneNumber[20];
	int age;
}Person;//재정의
int main()
{
	Point pos = { 10,20 };
	Person man = { "홍길동","010-1212-0001",21 };

	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNumber,man.age);
	return 0;
}