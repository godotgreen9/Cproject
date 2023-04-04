#include<stdio.h>

/*포인터와 배열의 차이 배열명이 포인터명과 같다*/
 
int main()
{
	char* pszData = "Test String!";//배열의주소값을 갇는다

	printf("%s", pszData);

	printf("[%p]%c\n", pszData, *pszData);//가르키는 곳 T값
	printf("[%p]%c\n", pszData+1, *(pszData+1));
	printf("[%p]%c\n", pszData+5, *(pszData+5));
	printf("[%p]%c\n", pszData+11, *(pszData+11));



	printf("%zd\n", sizeof(pszData));//컴파일러 8바이트
	printf("%zd\n", sizeof(*pszData));//1바이트
	printf("%zd\n", sizeof(*pszData+1));//4 덧셈연산의 크기는 4바이트
	printf("%c\n", (*pszData + 1));//U T 다음에 나오는 값

	return 0;
}