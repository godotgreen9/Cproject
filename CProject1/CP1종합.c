/* #include<stdio.h>
int main()
{
	printf("Welcome to C World");
	return 0;
}
#include<stdio.h>
int main()
{
	printf("%d", 10);//변환문자열 %d(decimal)
	printf("\n");//줄바꿈
	printf("%d\n", 10 + 20);
	printf("%d\n", 10, 20);
	printf("%d %d\n", 10, 20);//공백도 문자
	//printf("%d",10);//공백도 문자
	return 0;
}
//실행결과
//100+100
//200
//한국직업능력교육원 2030
#include<stdio.h>
int main()
{
	printf("%d", 100);//문자화printf("100+100\n"):;
	printf("+");
	printf("%d", 100);
	printf("\n");//줄바꿈
	printf("%d\n", 100 + 100);
	printf("=============\n");
	printf("한국직업능력교육원 %d", 2030);
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
	int hap; // 변수 선언
	int hap2;
	hap = 10 + 20;
	printf("%d\n", hap);
	hap2 = hap;
	printf("%d", hap2);
	return 0;//프로그램종료
}
#include<stdio.h>
int main()
{
	int num; // 변수 선언
	//printf("%d\n", num);변수선언후 값을 안주면  garbage가 들어있다
	num = 100;
	printf ("%d,num")
	return 0;//프로그램종료
}
#include<stdio.h>
int main()
{
	int num;
	int num2;
	printf("정수값 하나를 입력하세요 :");
	scanf_s("%d", &num);
	printf("입력 받은 정수값은 %d입니다.\n",num);
	printf("정수값 하나를 입력하세요 :");
	scanf_s("%d", &num2);
	printf("입력 받은 정수값은 %d입니다.\n", num2);
	//scanf_3("%d%d,&num,&num2);9`
	return 0;
}
// 내가 가장 좋아하는 숫자는 : 9
#include<stdio.h>
int main()
{
	printf("내가 가장 좋아하는 숫자는 : %d\n", 9);
	return 0;
}
// 월드컵은
// 2002년에
// 개최되었습니다
#include<stdio.h>
int main()
{
	printf("월드컵은\n2002년에\n개최되었습니다\n");
	return 0;
}
// 4*5=20
// 7*9=63
// 계속하려면 아무 키나 누르십시오 ...
#include<stdio.h>
int main()
{
	printf("%d*%d=%d\n", 4, 5, 20);
	printf("%d*%d=%d\n", 7, 9, 7*9);
	//printf("4*5= 20\n7*9= 63\n 계속하려면 아무 키나 누르십시오...\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int height;
	int weight;
	int cha;//변수선언누락
	height = 168;
	weight = 48;
	cha = height - weight;//cha의 값 설정
	printf("키:%dcm\n",height);//키문자
	printf("몸무게:%dkg\n", weight);
	printf("키에서 몸무게를 뺀 값은 %d입니다.", cha);
	return 0;
}
#include<stdio.h>

int main()
{
	int employed; // 취업자(160명)
	int graduation; //int graduation; // 졸업자(240명)
	double percentage; // 취업률
	printf("취업자 입력:");
	scanf_s("%d", &employed, &graduation);
	printf("졸업자 입력:");
	scanf_s("%d", &graduation);
	percentage=employed /(double)graduation * 100;//
	printf("취업률은 %1f%%;입니다", percentage);//
	return 0;
}
#include<stdio.h>
int main()
{
	printf("소수점형 상수 10002.0을 지수 형태로 출력 : %le\n", 10002.0);
	printf("소수점형 상수 0.00625e3을 지수 형태로 출력 : %le\n", 0.00625e3);
	return 0;
}
#include<stdio.h>
int main()
{
	printf("우리는 모두 \"오! 필승 코리아\"를 외쳤습니다.\n");
	printf("1.c언어에서 \"/*\"와 \"\"사이의 코드는 주석으로 처리됩니다.\n ");
 	printf("2.서식문자는 '\\'와 소문자로 만듭니다.");
	return 0;
}
#include<stdio.h>S

int main()
{
	//문자출력시 %자리수를 지정할 수 있다
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
	//연속으로 문자 입력시 엔터키도 문자로 인식 두번째 %앞에 스페이스
	char ch1, ch2;
	//printf("두개의 문자를 입력하세요:");
	//scanf_s("%c%c", &ch1,1, &ch2,1);
	printf("첫번째 문자를 입력하세요:");
	scanf_s("%c", &ch1, 1);
	printf("두번째 문자를 입력하세요:");
	scanf_s(" %c", &ch2, 1);
	printf("첫번째 문자:%c\n", ch1);
	printf("두번째 문자:%c\n", ch2);
	return 0;
}
#include<stdio.h>
int main()
{
	// 두 정수를 입력하세요 ; 10 3
	//나눗셈 연산식은 "10/3= 3.333333"입니다.
	// 계속하려면 아무 키나 누르십시요 ...
	int a;
	int b;
	double c;
	printf("두 정수를 입력하세요 :");
	scanf_s("%d%d", &a, &b);
	c = a / (double)b;
	printf("나눗셈 연산식은\"%d/%d\"=%lf 입니다", a, b, c);
	return 0;
}
#include<stdio.h>
int main()
{
	// 이름 나이 성별 키 입력 입력문자확인
	char name[80];//이름
	char sex;//성별
	int age;//나이
	double height;//키
	printf("이름을 입력하세요 :");
	scanf_s("%s", name, 80); //문자
	printf("나이을 입력하세요 :");
	scanf_s("%d", &age); //숫자
	printf("성별을 입력하세요 :");
	scanf_s(" %c", &sex, 1); //문자 \n은 줄바꿈
	printf("키를 입력하세요 :");
	scanf_s("%lf", &height); //숫자
	printf("이름:%s,성별:%c,나이:%d,키:%.lf\n", name, sex, age, height);
	return 0;
}*/
