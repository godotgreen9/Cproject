#include<stdio.h>
struct vision 
{
	double left;
	double right;
};
struct vision exchange(struct vision robot);
int main()
{
	struct vision robot;//구조체변수 선언
	printf("로보트의 시력을 입력하세요(좌,우) :");
	//멤버 참조연산자는 주소연산자보다 우선 순위가 높다
	scanf_s("%lf%lf",&robot.left,&robot.right);
	robot= exchange(robot);//변수의 저장된 값만 기존의값을 새로운값으로
	printf("바뀐 로보트이 시력(좌,우) :%.1lf,%.1lf\n", robot.left, robot.right);
	return 0;
}
struct vision exchange(struct vision robot)
{
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;
	return robot;
}