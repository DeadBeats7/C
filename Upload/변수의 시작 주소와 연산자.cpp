#include<stdio.h>
int main(void)
{
	int a = 5;
	int b = 6;

	printf("a의 값 : %d \n", a); //a라는 변수에 저장된 값을 10진수로 출력시켜준다.
	printf("b의 값 : %d \n", b); //b라는 변수에 저장된 값을 10진수로 출력시켜준다.

	printf("변수 a의 시작 주소 : %x \n", &a); //변수 a의 시작주소를 16진수로 출력한다.
	printf("변수 b의 시작 주소 : %x \n", &b); //변수 b의 시작주소를 16진수로 출력한다.

	return 0;
}