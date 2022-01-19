#include <stdio.h>
void func_A(void); //함수 선언 00형태

int main(void)
{
	int aaa = 10; //main() 함수의 지역 변수 aaa
	printf("main( ) 함수의 aaa 값 : %d \n", aaa);

	func_A( ); //함수 호출

	return 0;
}

void func_A(void)
{
	int aaa = 20; //func_A( ) 함수의 지역 변수 aaa
	int bbb = 30; //func_A( ) 함수의 지역 변수 bbb

	printf("func_A( ) 함수의 aaa 값 : %d \n", aaa);
	printf("func_A( ) 함수의 bbb 값 : %d \n", bbb);
	return;
}