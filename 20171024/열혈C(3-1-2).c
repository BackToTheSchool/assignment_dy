#include <stdio.h>
#include <stdlib.h>

int main()
{
	int result;
	int num1, num2, num3;

	printf("�� ���� ������ �Է��Ͻÿ�. \n");
	printf("����� num1xnum2+num3�Դϴ�. \n");

	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 * num2 + num3;

	printf("���� ����� %d�Դϴ�. \n", result);

	system("pause");

	return 0;
}