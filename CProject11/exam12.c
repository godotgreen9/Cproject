#include<stdio.h>

struct profile
{
	char name[20];
	double grade;
	int english;
};

void input_data(struct profile*);
void elite(struct profile*);

int main()
{
	struct profile new_staff[5];
	input_data(new_staff);
	elite(new_staff);

	return 0;
}
void input_data(struct profile* sp)
{
	int i;

	printf("�̸�,����,���� ������ �Է��ϼ���.\n");
	for (i = 0; i < 5; i++)//�迭�� �ε��� ��ŭ �ݺ��ϰڴٴ� ��
	{
		scanf_s("%s%lf%d",(sp+i)->name,20,&(sp+i)->grade,& (sp + i)->english);//�����ͺ����� ���� *sp
	}
}
void elite(struct profile* sp)
{
	int i;
	//���� 4.0�̻��̰� ��������  900���̻��� �л�
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		if ((sp + i)->grade >= 4.0 && (sp + i)->english >= 900)
		   printf("%s,%.1lf,%d\n ",(sp + i)->name,(sp + i)->grade, (sp + i)->english );
	}
}