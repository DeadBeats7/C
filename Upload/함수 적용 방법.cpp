#include <stdio.h>
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main(void)
{
	int i, j;
	int k;

	printf("숫자 두 개를 입력하세요 : ");
	scanf_s("%d %d", &i, &j);

	k = max(i, j);
	printf("%d와 %d 중 큰 수는 %d입니다. \n", i, j, k);

	return 0;
}