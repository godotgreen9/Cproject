#include<stdio.h>

/*�����Ϳ� �迭�� ���� �迭���� �����͸�� ����*/
 
int main()
{
	char* pszData = "Test String!";//�迭���ּҰ��� ���´�

	printf("%s", pszData);

	printf("[%p]%c\n", pszData, *pszData);//����Ű�� �� T��
	printf("[%p]%c\n", pszData+1, *(pszData+1));
	printf("[%p]%c\n", pszData+5, *(pszData+5));
	printf("[%p]%c\n", pszData+11, *(pszData+11));



	printf("%zd\n", sizeof(pszData));//�����Ϸ� 8����Ʈ
	printf("%zd\n", sizeof(*pszData));//1����Ʈ
	printf("%zd\n", sizeof(*pszData+1));//4 ���������� ũ��� 4����Ʈ
	printf("%c\n", (*pszData + 1));//U T ������ ������ ��

	return 0;
}