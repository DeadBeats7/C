#include <stdio.h>
typedef int money;
int main(void)
{
	money num1 = 4000;
	money num2 = 15000;
	money num3 = 3000;
	money num4 = 0;

	num4 = num1 + num2 + num3 + num4;
	printf("total money : %dwon \n", num4);

	return 0;
}