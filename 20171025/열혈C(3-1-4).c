#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2;

	printf("�� ���� �Է��Ͻÿ�. ���� ���� ���� ���� �����ϴ�. \n");
	scanf_s("%d %d", &num1, &num2);

	printf("%d�� ���̰� %d�� �������Դϴ�.\n", num1 / num2, num1 % num2);


	system("pause");
	return 0;
}