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
	{"홍길동",23,"010-111-1111","울릉도 독도"},
	{"이순신",35,"010-222-2222","서울 건천동"},
	{"장보고",19,"010-333-3333","완도 청해진"},
	{"유관순",15,"010-444-4444","충남 천안"},
	{"안중근",45,"010-555-5555","황해도 해주"}
	};//밖에 가로는 배열초기화 안은 구조체 초기화 가로
	
	int i;
	for (i = 0; i < 5; i++)
	{
	  printf("%10s%5d%15s%20s\n",list[i].name, list[i].age, list[i].tel, list[i].add);
	}
	return 0;
}
