#include <stdio.h>

void main()
{
	//사용자로 부터 영문 한글자와 정수 둘을 입력 받은후 영문 한글자가 무엇
	//할지 따라 다음 연산을 수행하고 결과물 출력하는 프로그램을 작성
	//a 두 수를 더함 b 두 수를 곱함  c 먼저 정수에 나중 정수를 뺌
	//해당하는 않는 영문자 경우 "알수 없는 명령"으로 출력

	char ch = 0;
	int x = 0, y = 0;

	scanf_s("%c%d%d", &ch,1,&x,&y);

	//printf("두 정수를 입력하세요");
	//scanf_s("%d%d",&x,&y);

	switch(ch)
	{
	case 'a':
	printf ("x+Y=%d\n",x+y);
	break;
	case 'b':
	printf("x*Y=%d\n",x*y);
	break;
	case 'c':
	printf("x-Y=%d\n",x-y);
	break;
    default:
		puts("알 수 없는 명령");
	}

	return 0;
}
