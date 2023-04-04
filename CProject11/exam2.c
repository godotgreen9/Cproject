#include<stdio.h>
//
struct profile
{
	int age;
	double height;
	char name[20];
	char* ap;
	//char name[20] = "홍길동"; 배열을 사용안됨
};
int main()
{
	struct profile pf;
	pf.age = 10;
	pf.height = 20.5;
	strcpy(pf.name, "이순신");
	pf.ap = "홍길동";//힙에 만들어 주소로만 접근

	printf("%d\n", pf.age);
	printf("%lf\n",pf. height);
	printf("%s\n", pf.name);
	printf("%s\n", pf.ap);
	//printf("%s\n", pf.name);
	
	return 0;
}



