#include <stdio.h>
int main(void)
{
	int a, b;
	a = 7;
	b = 3;

	printf("덧셈 연산 결과 : %d \n", a + b);
	printf("뺄셈 연산 결과 : %d \n", a - b);
	printf("곱셈 연산 결과 : %d \n", a * b);
	printf("나누기 연산 결과 : %d \n", a / b);
	printf("나머지 연산 결과 : %d \n", a % b);

	return 0;
}