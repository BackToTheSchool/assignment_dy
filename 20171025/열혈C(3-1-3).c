#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;

	printf("�� ���� �Է¹޾Ƽ� ������ �մϴ� \n");
	printf("�ƹ� ������ �Է��Ͻÿ� \n");

	scanf_s("%d", &num1);
	num2 = num1*num1;

	printf("%d�� %d�� �����Դϴ�.", num2, num1);

	system("pause");

	return 0;
}