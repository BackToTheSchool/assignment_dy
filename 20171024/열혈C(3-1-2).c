#include <stdio.h>
#include <stdlib.h>

int main()
{
	int result;
	int num1, num2, num3;

	printf("세 개의 정수를 입력하시오. \n");
	printf("계산은 num1xnum2+num3입니다. \n");

	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 * num2 + num3;

	printf("연산 결과는 %d입니다. \n", result);

	system("pause");

	return 0;
}