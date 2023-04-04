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

	printf("이름,학점,영어 점수를 입력하세요.\n");
	for (i = 0; i < 5; i++)//배열의 인덱스 만큼 반복하겠다는 뜻
	{
		scanf_s("%s%lf%d",(sp+i)->name,20,&(sp+i)->grade,& (sp + i)->english);//포인터변수로 접근 *sp
	}
}
void elite(struct profile* sp)
{
	int i;
	//학점 4.0이상이고 영어점수  900점이상인 학생
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		if ((sp + i)->grade >= 4.0 && (sp + i)->english >= 900)
		   printf("%s,%.1lf,%d\n ",(sp + i)->name,(sp + i)->grade, (sp + i)->english );
	}
}