#include<stdio.h>
//
struct profile
{
	int age;
	double height;
	char name[20];
	char* ap;
	//char name[20] = "ȫ�浿"; �迭�� ���ȵ�
};
int main()
{
	struct profile pf;
	pf.age = 10;
	pf.height = 20.5;
	strcpy(pf.name, "�̼���");
	pf.ap = "ȫ�浿";//���� ����� �ּҷθ� ����

	printf("%d\n", pf.age);
	printf("%lf\n",pf. height);
	printf("%s\n", pf.name);
	printf("%s\n", pf.ap);
	//printf("%s\n", pf.name);
	
	return 0;
}



