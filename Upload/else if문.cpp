#include <stdio.h>
int main(void)
{
	int num;

	printf("C ��� ���� �Է� : ");
	scanf_s("%d", &num);

	if (num >= 95)
		printf("A+�Դϴ�. \n");

	else if (num >= 90) //num >= 95�� �ƴ� �� ���� ��� �߿��� num >= 90�� ���� ���
		printf("A�Դϴ�. \n");

	else if (num >= 85) //num >= 90�� �ƴ� �� ���� ��� �߿��� num >= 85�� ���� ���
		printf("B+�Դϴ�. \n");

	else if (num >= 80) //num >= 85�� �ƴ� �� ���� ��� �߿��� num >= 80�� ���� ���
		printf("B�Դϴ�. \n");

	else //��� ���ǽ��� ������ ��� F�� ���
		printf("F�Դϴ�. \n");

	return 0;
}