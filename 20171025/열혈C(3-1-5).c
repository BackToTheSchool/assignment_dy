#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, num3;
	int result;

	printf("�� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("�������� (num1-num2\)x(num2+num3)x(num3%%num1)�Դϴ�. \n");

	result = (num1 - num2) * (num2 + num3) * (num3 % num1);

	printf("��� : %d", result);


	system("pause");
	return 0;
}