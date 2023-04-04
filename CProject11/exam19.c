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
	scanf_s("%s",man.name,20);//배열이라 안붙임
	printf("phone");
	scanf_s("%s",man.phoneNumber,20);
	printf("age");
	scanf_s("%d", &man.age);//정수형 변수라 주소연산자 붙임
	
	return man;
}
int main()
{
	Person man =ReadPersonInfo();
	ShowPersonInfo(man);

	return 0;
}
