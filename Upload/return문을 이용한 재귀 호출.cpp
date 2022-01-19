#include <stdio.h>
int factorial(int n); //함수 선언 11형태

int main(void)
{
	int a;
	int result; //팩토리얼 계산 결과 저장하는 변수

	printf("정수 입력 : ");
	scanf_s("%d", &a);

	result = factorial(a);
	printf("%d 팩토리얼은 : %d입니다. \n", a, result);
	return 0;
}

int factorial(int n)
{
	if (n <= 1)
		return 1;

	else
		return n * factorial(n - 1);
}