#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int result1, result2;
	int num1, num2;

	printf("�� ���� ������ �Է��Ͻÿ�. \n");
	scanf_s("%d %d", &num1, &num2);
	
	result1 = num1 * num2;
	result2 = num1 - num2;

	printf("�� ���� ���� %d�Դϴ�. \n", result1);
	printf("�� ���� ���� %d�Դϴ�.", result2);

	system("pause");
	
	return 0;
}