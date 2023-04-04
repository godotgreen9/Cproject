#include<stdio.h>

/*배열은 연속이다, 반복적인 작업은 for문 이용 
  배열 요소에 있는 값 출력 */


int main()
{
	int arr[5];//[]배열선언 4바이트짜리 5개위치 0-5
	int sum = 0;
	int i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);

	//배열 요소에 있는 값을 출력
	for (i = 0; i < 5; i++)//0 1 2 3 4 i 제어변수(반복횟수),인덱스(위치)
	{
		printf("%d\n", arr[i]);
	}

	//배열 요소에 있는 값을 더하여 합을 출력
	for (i = 0; i < 5; i++)//초기화 안하면 i=5
	{
		sum += arr[i];
	}
	printf("배열 요소에 저장된 값의 합:%d\n",sum);

	return 0;
}
