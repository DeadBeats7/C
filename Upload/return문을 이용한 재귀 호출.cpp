#include <stdio.h>
int factorial(int n); //�Լ� ���� 11����

int main(void)
{
	int a;
	int result; //���丮�� ��� ��� �����ϴ� ����

	printf("���� �Է� : ");
	scanf_s("%d", &a);

	result = factorial(a);
	printf("%d ���丮���� : %d�Դϴ�. \n", a, result);
	return 0;
}

int factorial(int n)
{
	if (n <= 1)
		return 1;

	else
		return n * factorial(n - 1);
}