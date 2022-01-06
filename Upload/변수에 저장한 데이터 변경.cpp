#include <stdio.h>
int main(void)
{
	int a = 0;
	int b = 1;

	printf("a의 값은 %d입니다. \n", a);
	printf("b의 값은 %d입니다. \n", b);

	a = a + 20;
	b = b + 10;

	printf("변경된 a의 값은 %d입니다. \n", a); //변경된 값을 출력함. a의 값은 0 + 20 해서 20이 나오게 됨
	printf("변경된 b의 값은 %d입니다. \n", b); //변경된 값을 출력함. b의 값은 1 + 10 해서 11이 나오게 됨

	return 0;
}