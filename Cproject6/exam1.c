#include<stdio.h>

/*�迭�� �����̴�, �ݺ����� �۾��� for�� �̿� 
  �迭 ��ҿ� �ִ� �� ��� */


int main()
{
	int arr[5];//[]�迭���� 4����Ʈ¥�� 5����ġ 0-5
	int sum = 0;
	int i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);

	//�迭 ��ҿ� �ִ� ���� ���
	for (i = 0; i < 5; i++)//0 1 2 3 4 i �����(�ݺ�Ƚ��),�ε���(��ġ)
	{
		printf("%d\n", arr[i]);
	}

	//�迭 ��ҿ� �ִ� ���� ���Ͽ� ���� ���
	for (i = 0; i < 5; i++)//�ʱ�ȭ ���ϸ� i=5
	{
		sum += arr[i];
	}
	printf("�迭 ��ҿ� ����� ���� ��:%d\n",sum);

	return 0;
}
