|/*#include<stdio.h>
//함수 포인터를 사용하영 비슷한 함수를 반복문으로 호출하기 p531
int Sum(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}

void main()
{
	int(*p[4])(int, int) = { &Sum,&Sub,&Mul,&Div }, i;
	//함수 포인터를 배열로 선언하고 함수 원형이 int func(int,int)로
	//같은 내 함수의 주소 값을 저장한다
	char op_table[4] = { '+','-','*','/' };
	//순서대로 호출
	for(i=0; i<4; i++) 
	printf("%d %c %d = %d\n", 8, op_table[i], 2, (*p[i])(8, 2));
	
}
    //8 + 2 = 10
	//8 - 2 = 6
	//8 * 2 = 16
	//8 / 2 = 4
	*/
//fseek 함수와 ftell 함수로 바이너리 파일 크기 알아내기
#include<stdio.h>

void main()
{
	int file_size = 0;
	FILE* p_file = fopen("tipssoft.dat", "rb");
		if (NULL != p_file)
		{
			fseek(p_file, 0, SEEK_END);
			file_size = ftell(p_file);
			printf("파일크기 :%d\n", file_size);
			fclose(p_file);
	    }
}