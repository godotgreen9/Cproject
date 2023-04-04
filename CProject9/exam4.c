#include<stdio.h>
/*스택(LIFO)과 힙 개념(객체지향언어 개념)
  스택은 사용할수 있는 공간 배열선언 복사 (힙의 시작주소값은 가지고있다)
  힙은 운영채제가 사용하는 공간 접근만 수정만 힙을 접근할수 있는 것은 포인터
  힙은 주소로만 접근 가능하다
  */
int main()
{
	char str1[] = "My String";
	char* str2 = "Your String";

	printf("%s %s\n", str1, str2);

	str2 = "Our String";//
	printf("%s %s\n", str1, str2);

	str1[0] = 'X';//힙의 값은 바꿀수 없다, 수정불가
	printf("%s %s\n", str1, str2);

	str2[0] = 'X';
	printf("%s %s\n", str1, str2);

	return 0;
}
