#include<stdio.h>

typedef struct person//���������� ���� ���ִ� ����ü �����
{
	char name[20];
	char phoneNumber[20];
	int age;
}Person;

void ShowPersonInfo(Person man)//�����ϱ� ��¿����� ��������Լ�
{
	printf("name : %s\n", man.name);
	printf("phone : %s\n", man.phoneNumber);
	printf("age : %d\n", man.age);
}
Person ReadPersonInfo()//�Է��̶� �޴� ���� ����
{
	Person man; //��������

	printf("name");
	scanf_s("%s",man.name,20);//�迭�̶� �Ⱥ���
	printf("phone");
	scanf_s("%s",man.phoneNumber,20);
	printf("age");
	scanf_s("%d", &man.age);//������ ������ �ּҿ����� ����
	
	return man;
}
int main()
{
	Person man =ReadPersonInfo();
	ShowPersonInfo(man);

	return 0;
}
