#include <stdio.h>
int main(void)
{
	printf("10진수 정수 : %d \n", 0.5);
	printf("10진수 실수 : %f \n", 0.6);
	printf("10진수 실수 : %lf \n", 0.6);

	printf("소수점 이하 6자리 이상 : %f \n", 0.123243567);
	printf("소수점 이하 6자리 이상 : %lf \n", 0.123243567);

	return 0;
}