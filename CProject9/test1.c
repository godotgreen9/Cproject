/*#include<stdio.h>
strawberry
  trawberry
  rawberry
  awberry
  wberry
  erry
  rry
  ry
  

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
}*/
#include<stdio.h>
//
int main()
{
	char str[] = "My string";
	Char* str2 = "Your String";

	printf("%s%s\n", str1, str2);

	printf("%s%s\n", str1, str2);

	return 0;
}
