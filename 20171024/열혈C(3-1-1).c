#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int result1, result2;
	int num1, num2;

	printf("두 개의 정수를 입력하시오. \n");
	scanf_s("%d %d", &num1, &num2);
	
	result1 = num1 * num2;
	result2 = num1 - num2;

	printf("두 수의 곱은 %d입니다. \n", result1);
	printf("두 수의 차는 %d입니다.", result2);

	system("pause");
	
	return 0;
}