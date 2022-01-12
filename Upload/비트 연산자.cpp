#include <stdio.h>
int main(void)
{
	int num1 = 30, num2 = 25;
	int result1;

	result1 = num1 & num2;
	printf("비트 단위 & 연산의 결과 %d \n", result1); //결과는 24

	return 0;
}