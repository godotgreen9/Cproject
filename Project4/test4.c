
#include<stdio.h>
	/*양수를 입력 그 숫자만큼 별(*)이 출력 while문과 증감 연산자사용
  추가로 한 줄에 5개 씩 출력되도록 */
int main()
{
	int n=0;
	int i;

	printf("양수를 입력하세요 :");
	scanf_s("%d",&n);//13

	i = 0;
	while (i < n)
	{
	    printf("*");
		i++;
		if (i%5 == 0)
			printf("\n");
		}
		
     
		return 0;
 }

	
