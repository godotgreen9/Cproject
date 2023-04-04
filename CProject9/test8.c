#include<stdio.h>
#include<string.h>
//이름을 입력하세요 :대한민국
//전화번호를 입력: 000-000-0000
//주소: 대한민국 서울시 서울동 000번지

int main()
{ 
	char name[10] = { 0 };
	char tel[20] = { 0 };
	char add[50] = { 0 };
	char str[80] = { 0 };//반드시 초기화

	printf("이름을 입력하세요 : ");
	gets(name);//get마지막 공간을 자동으로 붙이는 기능
	strcat_s(str,sizeof(str), name);//입력후 저장
	strcat_s(str,sizeof(str), ",");
	printf("전화번호를 입력하세요 : ");
	gets(tel);
	strcat_s(str,sizeof(str), tel);
	strcat_s(str,sizeof(str), ",");
	printf("주소를 입력하세요 : ");
	gets(add);
	strcat_s(str,sizeof(str), add);
	
	puts(str);

	return 0;
}
	
/*#include<stdio.h>
#include<string.h>
int main()
//while, get,
//c언어는/ 프로그램 언어중/ 기본이다 /끝
{
	char novel[800] = { 0 };
	char str_in[80] = { 0 };
	while (1)//무한루프 while(1)
	{
		printf("문자열을 입력하세요");
		gets(str_in);
		if (strcmp(str_in, "끝") == 0)
			break;
		strcat_s(novel, sizeof(novel), str_in);
		strcat_s(novel, sizeof(novel), " ");
		printf("현재까지의 줄거리 :");
		puts(novel);
		puts("\n");
	}
	/*while (strcmp(str_in, "끝") != 0)
	{
		gets(str_in);
		strcat_s(novel, sizeof(novel), str_in);
		puts(novel);
	}
	return 0;
}
#include<stdio.h>
// if 절을 이용한 입력 계절값에 따른 꽃 아웃풋
int main()
{
	char season[80];//
	printf("계절명을 입력하세요 :");
	scanf_s("%s", season, 80);//문자배열은 s, 배열명은 ""안붙임
	//printf("개나리\n");//봄
	//printf("장미\n");//여름
	printf("국화\n");//가을
	printf("매화\n");//겨울
	printf("계절명을 잘못 입력하였읍니다\n");

	if (strcmp(season, "봄") == 0)
		printf("개나리\n");
	else if (strcmp(season, "여름") == 0)
		printf("장미\n");
	else if (strcmp(season, "가을") == 0)
		printf("국화\n");
	else if (strcmp(season, "겨울") == 0)
		printf("매화\n");
	else
		printf("계절명을 잘못 입력하였읍니다\n");

	return 0;
}

#include<stdio.h>
#include<string.h>
//string len를 비교하여 참과 거짓
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
//함수 user-strcpy를 만들어 배열을 넘겨 배열 선언후 값주기
//포인터변수이용
void user_strcpy(char* des, char* scr);//함수 선언먼저
int main()
{
	char fruit[20];//배열선언
	user_strcpy(fruit, "strawberry");//함수 배열명과 문자열 넘겨
	printf("배열에 저장된 문자열 :%s\n", fruit);
	return 0;
}
void user_strcpy(char* des, char* scr)//함수안에서 매개변수 지역변수
//포인터변수로 받음 (주소,strawberry)
{
	while (*scr != '\0')
	{
		*des = *scr;
		scr++;
		des++;
	}
	*des = *scr;// *des='\0';
	//문자열 끝에 반드시 널 문자가 포함되어야 한다
}
#include <stdio.h>
// watermelon를
// wtreo 한 칸 건너 뛰어 출력하는 방법
int main()
{
	char* str = "watermelon";//포인변수로 문자열 접근
	int i = 0; //0번째부터 출력하여 짝수 번째만 출력
	while (str[i] != '\0')
	{
		if (i % 2 == 0)//나누어서 영이면 짝수 아니면 홀수
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
	printf("나이를 입력하세요 :");
	scanf_s("%d", &age);
	if (age > 30)
		greeting = "처음 뵙겠습니다.";//처음뵙겠습니다
	else
		greeting = "반가워요";//"반가워요"
	printf("인사말 :%s\n", greeting);
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
		printf("%s\n", fruit);//s %s 문자열 처리시 포인명 배열명만
		fruit++;
	}
	return 0;
}
/*#include<stdio.h>
//문자열은 배열의 형태로 구현되어 있다
  배열명 객체 지향언어라 개념잡아라
  배열의 장점 index가 존재 index로 접근하여 값을 줄수 있다
  배열명은 곧 시작주소이다
int main()
{
	char str[80] = "dream";//여유 있게
	int count = 0;
	int i = 0;
	while (str[i] != '\0')//문자열이 널이 아닐떄까지 반복
	{
		count++;
		i++;
	}
	printf("배열에 저장된 문자열의 길이 : %d\n", count);
	return 0;
}
#include<stdio.h>
//문자열은 배열의 형태로 구현되어 있다
int main()
{
	printf("주소값을 출력 : %p\n", "dream");
	printf("첫번째 문자를 출력 : %c\n", *"dream");//*시작주소의 값을 출력
	printf("세번째 문자를 출력 : %c\n", *("dream" + 2));//*( +)
	printf("세번째 문자를 출력 : %c\n", "dream"[2]);//[]
	return 0;
}
#include<stdio.h>
int main()
{
	char* name;
	name = "Hong gildong";
	printf("이름 : %s\n", name);//가능이유 p변수가 시작변수를 가리키고있고
	printf("여섯번째 문자 : %c\n", name[5]);//배열표현도 가능
	return 0;
}
#include<stdio.h>
스택(LIFO)과 힙 개념(객체지향언어 개념)
  스택은 사용할수 있는 공간 배열선언 복사 (힙의 시작주소값은 가지고있다)
  힙은 운영채제가 사용하는 공간 접근만 수정만 힙을 접근할수 있는 것은 포인터
  힙은 주소로만 접근 가능하다
int main()
{
	char str1[] = "My String";
	char* str2 = "Your String";
	printf("%s %s\n", str1, str2);
	str2 = "Our String";//
	printf("%s %s\n", str1, str2);
	str1[0] = 'X';//힙의 값은 바꿀수 없다, 수정불가
	printf("%s %s\n", str1, str2);
	str2[0] = 'X';
	printf("%s %s\n", str1, str2);
	return 0;
}
#include<stdio.h>
//배열명은 상수값이다 주소을 가리키는
int main()
{
	//char* fruit = "stawberry"; OK
	//char fruit[20] ="stawberry";OK 배열선언과 동시에 문자열 대입
	char fruit[20];
	fruit = "strawberry";// 변수가 아닌 배열은 상수값(주소에다 문자열대입)
	printf("%s\n", fruit);
	return 0;
}
#include<stdio.h>
//문자열 처리함수 라이브러리 함수 프레임워크(쉽게 쓰기 위한 툴)
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
//함수를 이용한 것
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
	printf("문자열의 길이 : %d\n", len);//5 널 제외
	len = strlen(strp);
	printf("문자열의 길이 : %d\n", len);//6 널 제외
	return 0;
}
#include<stdio.h>
//문자열 처리함수 라이브러리 함수 프레임워크(쉽게 쓰기 위한 툴)
//string compare 문자열 비교 함수,
int main()
{
	char str1[20] = "banana";
	char str2[20] = "apple";
	char temp[20];
	int res;
	res = strcmp(str1, str2);
	//두 문자열을 비교하여 리턴하는 값(사전순서)
	//b 하고 a 비교
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
//문자열 연결
int main()
{
	char fruit[80] = "straw";
	strcat_s(fruit, sizeof(fruit), "berry");
	printf("연결된 문자열 : %s\n", fruit);
	return 0;
}
#include<stdio.h>
//문자열 입력시 공백 포함될수 있으나
//scnaf는 공백은 문자열 끝으로 취급
//빈칸이 포함된 문자열은 gets이용
//puts는 문자열만 출력하는 형식 저장된 값만
int main()
{
	char str[80];
	printf("문자열을 입력하세요 ;");
	scanf_s("%s", str, 80);
	printf("입력된 문자열 : %s\n", str);//
	gets(str);//공백 이후만 인식
	printf("입력된 문자열 : %s\n", str);
	//puts("입력된 문자열 : %s\n",str);형식오류
	puts(str);
	return 0;
}*/