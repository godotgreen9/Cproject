#include<stdio.h>

int main()
{
	// 1.6세 이하의 어린이와 70세 이상의 어른들은 무료입장
	// 2.그 외에는 3,000의 입장료를 받는다

	int age;

	printf("나이를 입력하세요 :");
	scanf_s("%d", &age);
		
	if (age =<6||age >=70)
	{
		printf("무료입장입니다.");
	}
	else
	{
		printf("입장료는 3,000원.");
	}
	return 0;
}