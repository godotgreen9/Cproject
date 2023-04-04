/*#include<stdio.h>
// 구조체는 배열과 달리 다른 형태의 자료형도 묶어서 처리 할수 있다
//현재 객체 지향 언어의 원조
//객체와 클라스의 개념은 잡고 있어야
//두개 이상의 변수를 하나로 묶는개념
//Struct 변수 {}; 구조형식
//
struct student
{
	int num;
	double grade;//총 12바이트가 1차원구조로 묶임
};

int main()
{
	struct student s1 = { 0 };//초기화
	s1.num = 2;
	s1.grade = 2.7;
	printf("학점 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);
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
	//char name[20] = "홍길동"; 배열을 사용안됨
};
int main()
{
	struct profile pf;
	pf.age = 10;
	pf.height = 20.5;
	strcpy(pf.name, "이순신");
	pf.ap = "홍길동";//문자열은 heap에 만들어져 바꿀수 없다
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
	char* ap;//포인트변수
};

int main()
{
	struct cracker basasak;
	printf("바사삭의 가격과 열량을 입력하세요 :");
	scanf_s("%d%d", &basasak.price, &basasak.calories);
	//scanf_s("%s", &basasak.ap);//힙에 문자열에 입력은 못 저장함
	printf("바사삭의 가격 : %d원\n", basasak.price);
	printf("바사삭의 열량 : %dKcal\n", basasak.calories);
	return 0;
}
#include<stdio.h>
//구조체안에 구조체구조

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
	s1.pf.age = 23;//접근방법
	s1.pf.height = 187.5;
	s1.pf.np = "홍길동";
	s1.num = 5;
	s1.grade = 4.4;
	printf("이름 :%s\n", s1.pf.np);
	printf("나이 :%d\n", s1.pf.age);
	printf("키 :%.1lf\n", s1.pf.height);
	printf("학번 :%d\n", s1.num);
	printf("학점 :%.1lf\n", s1.grade);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
//구조체안에 구조체구조

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

	printf("나이를 입력하세요 :");
	scanf_s("%d", &s1.pf.age);
	printf("키를 입력하세요 :");
	scanf_s("%lf", &s1.pf.height);//입력시 %lf 주의
	printf("이름를 입력하세요 :");
	s1.pf.np = (char*)malloc(20);//동적할당이용 메모리 얼로케이션
	scanf_s("%s", s1.pf.np, 20);//문자열 입력방법

	//s1.pf.np = "홍길동";
	//s1.pf.age = 23;//접근방법
	//s1.pf.height = 187.5;
	//s1.pf.np = "홍길동";
	s1.num = 5;
	s1.grade = 4.4;
	printf("이름 :%s\n", s1.pf.np);
	printf("나이 :%d\n", s1.pf.age);
	printf("키 :%.1lf\n", s1.pf.height);
	printf("학번 :%d\n", s1.num);
	printf("학점 :%.1lf\n", s1.grade);
	free(s1.pf.np);//동적할당 해제
	return 0;
}
#include<stdio.h>
struct student
{
	int num;
	char name[20];
	double grade;
};// s1 = { 315,"홍길도",2.4 }; //구조체 선언과 동시에 초기화
int main()
{
	struct student s1 = { 315,"홍길동",2.4 };
	struct student s2 = { 237,"이순신",3.7 };//주소 저장
	struct student s3 = { 330,"세종대왕",4.47 };
	//
	struct student max;//아무것도 연결안된 변수를 보면 타입을 확인
	//같은 student 타입
	max = s1;//max도 s1값을 가리킨다
	if (s2.grade > max.grade)
		max = s2;
	if (s3.grade > max.grade)
		max = s3;
	printf("학번 :%d\n", max.num);
	printf("이름 :%s\n", max.name);
	printf("학점 :%.1lf\n", max.grade);
	return 0;
}
#include<stdio.h>
int main()
{
	int ary1[5] = { 1,2,3,4,5 };//배열명은 주소값이다
	int ary2[5];
	int i;

	ary2 = ary1;//상수와 상수 대입은 안됨

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
	struct vision robot;//구조체변수 선언
	printf("로보트의 시력을 입력하세요(좌,우) :");
	//멤버 참조연산자는 주소연산자보다 우선 순위가 높다
	scanf_s("%lf%lf", &robot.left, &robot.right);
	robot = exchange(robot);//변수의 저장된 값만 기존의값을 새로운값으로
	printf("바뀐 로보트이 시력(좌,우) :%.1lf,%.1lf\n", robot.left, robot.right);
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
//구조체 선언된 멤버 변수는 자동 초기화됨

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
	struct student s1 = { 315,"홍길동",{82,93,74,90,65} };//자동초기화
	//printf("name :%.s\n", name);
	//printf("score :%d\n", score[0], score[4]);
	s1 = avg_prn(s1);
	printf("평균 :%.1lf\n", s1.avg);

	return 0;
}
struct student avg_prn(struct student s)
{
	int i, sum = 0;

	printf("학번 :%d\n", s.num);
	printf("이름 :%s\n", s.name);
	printf("점수 :");

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
	{"홍길동",23,"010-111-1111","울릉도 독도"},
	{"이순신",35,"010-222-2222","서울 건천동"},
	{"장보고",19,"010-333-3333","완도 청해진"},
	{"유관순",15,"010-444-4444","충남 천안"},
	{"안중근",45,"010-555-5555","황해도 해주"}
	};//밖에 가로는 배열초기화 안은 구조체 초기화 가로

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].add);
	}
	return 0;
}


#include<stdio.h>
//포인터를 이용한 값 찍는 것
struct score
{
	int kor, eng, mat;
};

int main()
{
	struct score a = { 90,80,70 };
	struct score* sp = &a;

	printf("국어:%d\n", (*sp).kor);
	printf("영어:%d\n", (*sp).eng);
	printf("수학:%d\n", (*sp).mat);
	//간접멤버 참조 연산자
	printf("국어:%d\n", sp->kor);
	printf("영어:%d\n", sp->eng);
	printf("수학:%d\n", sp->mat);
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

	printf("이름,학점,영어 점수를 입력하세요.\n");
	for (i = 0; i < 5; i++)//배열의 인덱스 만큼 반복하겠다는 뜻
	{
		scanf_s("%s%lf%d", (sp + i)->name, 20, &(sp + i)->grade, &(sp + i)->english);//포인터변수로 접근 *sp
	}
}
void elite(struct profile* sp)
{
	int i;
	//학점 4.0이상이고 영어점수  900점이상인 학생
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		if ((sp + i)->grade >= 4.0 && (sp + i)->english >= 900)
			printf("%s,%.1lf,%d\n ", (sp + i)->name, (sp + i)->grade, (sp + i)->english);
	}
}
#include<stdio.h>
//열거형 중가로안에 사용할 데이타값을 미리 넣어 놓는것 필요해서
//프로그램 작성시 주의 초기화 작업

enum season { spring, summer, fall, winter };//변수도 문자도 아닌 값으로 처리
int main()
{
	enum season ss;//열거형 시즌이라는 타입 변수ss
	char* cp = NULL;//공백표시 ""(초기화), NULL(대문자주의), 포인터 변수의 초기화시 많이 이용
	//일반적인 변수는 쓰레기값이 들어있음 선택문들은 선택이 안됐을 경우
	ss = spring;//문자열도 아님 주의

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
	printf("나의 레저활동 ===>%s\n", cp);

	return 0;
}
#include<stdio.h>
//typed 정의 typed struct student Student; struct student 구조체를
//Student재정의 활용
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
//구조체 타입을 제정의하여 사용
typedef struct
{
	int num;
	double grade;
}Student;

void data_prn(Student*);

int main()
{
	Student s1 = { 315,4.2 };
	data_prn(&s1);//주소값을 넘겨 줘야

	return 0;
}
void data_prn(Student* sp)//받는 매개변수 타입은 Student
{
	printf("학번 : %d\n", sp->num);
	printf("학점 : %.1lf\n", sp->grade);
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
	printf("%s %s %d\n", man.name, man.phoneNumber, man.age);
	return 0;
}
#include<stdio.h>
// 클라스를 받고 클라스를 넘겨 받는 구조 (변수와 함수를 합쳐 놓은것)
//함수 만든는 법 작동 원리

typedef struct point
{
	int xpos;
	int ypos;

}Point;

void ShowPosition(Point pos)//재정의된 이름을 받아야 접근
{
	printf("[%d,%d]\n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition()//같은 타입 필수
{
	Point cen;
	printf("Input current pos :");
	scanf_s("%d%d", &cen.xpos, &cen.ypos);

	return cen;//반환값이 있나 반환타입은 뭔가
}
int main()
{
	Point curPos = GetCurrentPosition();//호수함출 넘겨주는값
	//인자값이 없으면 안쓴다 입력으로
	ShowPosition(curPos);//함수의 호출은()기본 인자값

	return 0;
}
#include<stdio.h>

typedef struct person//개인정보를 담을 수있는 구조체 만들고
{
	char name[20];
	char phoneNumber[20];
	int age;
}Person;

void ShowPersonInfo(Person man)//받으니까 출력용으로 출력전용함수
{
	printf("name : %s\n", man.name);
	printf("phone : %s\n", man.phoneNumber);
	printf("age : %d\n", man.age);
}
Person ReadPersonInfo()//입력이라 받는 것은 없음
{
	Person man; //지역변수

	printf("name");
	scanf_s("%s", man.name, 20);//배열이라 안붙임
	printf("phone");
	scanf_s("%s", man.phoneNumber, 20);
	printf("age");
	scanf_s("%d", &man.age);//정수형 변수라 주소연산자 붙임

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
	pos2 = pos1; //복사

	printf("크기 : %d\n", sizeof(pos1));
	printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
	printf("크기 : %d\n", sizeof(pos2));
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