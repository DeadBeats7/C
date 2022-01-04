#include <stdio.h>
int main(void)
{
	printf("%03d, %03d, %03d \n", 1, 50, 100);
	printf("%-3d, %-3d, %-3d \n", 1, 50, 100);
	printf("%+3d, %+3d, %+3d \n", 1, 50, 100);
	printf("%+3d, %+3d, %+3d \n", 1, 50, -100);

	return 0;
}