#include<stdio.h>
struct vision 
{
	double left;
	double right;
};
struct vision exchange(struct vision robot);
int main()
{
	struct vision robot;//����ü���� ����
	printf("�κ�Ʈ�� �÷��� �Է��ϼ���(��,��) :");
	//��� ���������ڴ� �ּҿ����ں��� �켱 ������ ����
	scanf_s("%lf%lf",&robot.left,&robot.right);
	robot= exchange(robot);//������ ����� ���� �����ǰ��� ���ο����
	printf("�ٲ� �κ�Ʈ�� �÷�(��,��) :%.1lf,%.1lf\n", robot.left, robot.right);
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