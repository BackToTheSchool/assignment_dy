#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int result1, result2;
	int num1, num2;

	printf(" \n");
	scanf_s("%d %d", &num1, &num2);
	
	result1 = num1 * num2;
	result2 = num1 - num2;

	printf(". \n", result1);
	printf(".", result2);

	system("pause");
	
	return 0;
}
