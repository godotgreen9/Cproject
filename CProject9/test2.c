#include<stdio.h>

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
/*#include<stdio.h>
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
}*/
