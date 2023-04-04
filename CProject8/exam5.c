#include<stdio.h>
/*포인터 변수를 배열처럼 사용가능 포이터 배열이름은 동급 */
int main()
{
	int arr[3] = { 15,25,35 };
	int* ptr = &arr[0];//int* ptr=arr;

	printf("%d %d\n", ptr[0], arr[0]);
	printf("%d %d\n", ptr[1], arr[1]);
	printf("%d %d\n", ptr[2], arr[2]);
	printf("%d %d\n", *ptr, *arr);

	return 0;
}