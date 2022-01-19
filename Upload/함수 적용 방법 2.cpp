#include <stdio.h>
double divide(double x, double y); //함수 선언 11형태
double input(void); //함수 선언 10형태
void output(double x); //함수 선언 01형태
void information(void); //함수 선언 00형태

int main(void)
{
	double num1, num2, result;

	information();
	printf("첫 번째 실수 입력 : ");
	num1 = input();

	printf("두 번째 실수 입력 : ");
	num2 = input();

	result = divide(num1, num2);
	output(result);

	return 0;
}

double divide(double x, double y)
{
	double val;
	val = x / y;
	return val;
}
double input(void)
{
	double val;
	scanf_s("%lf", &val);

	return val;
}
void output(double x)
{
	printf("나눗셈 결과 : %lf \n", x);
	return;
}
void information(void)
{
	printf("---프로그램 시작---\n");
	return;
}