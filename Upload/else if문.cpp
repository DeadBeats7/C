#include <stdio.h>
int main(void)
{
	int num;

	printf("C 언어 성적 입력 : ");
	scanf_s("%d", &num);

	if (num >= 95)
		printf("A+입니다. \n");

	else if (num >= 90) //num >= 95가 아닌 그 밖의 경우 중에서 num >= 90이 참인 경우
		printf("A입니다. \n");

	else if (num >= 85) //num >= 90가 아닌 그 밖의 경우 중에서 num >= 85이 참인 경우
		printf("B+입니다. \n");

	else if (num >= 80) //num >= 85가 아닌 그 밖의 경우 중에서 num >= 80이 참인 경우
		printf("B입니다. \n");

	else //모든 조건식이 거짓인 경우 F를 출력
		printf("F입니다. \n");

	return 0;
}