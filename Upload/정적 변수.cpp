#include <stdio.h>
void count(void);

int main(void)
{
	count();
	count();
	count();
	return 0;
}

void count(void)
{
	static int x = 0;
	int y = 0;

	x = x + 1;
	y = y + 1;

	printf("x °ª : %d, y °ª : %d \n", x, y);
}