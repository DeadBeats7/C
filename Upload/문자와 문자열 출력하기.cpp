#include <stdio.h>
int main(void)
{
	printf("b를 대문자로 표현하면 %c입니다. \n", 'B');
	printf("%s %c입니다. \n", "b를 대문자로 표현하면", 'B');
	printf("%s %d %s\n", "5 곱하기 3은", 5 * 3, "입니다.");

	return 0;
}