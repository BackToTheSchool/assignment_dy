#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, num3;
	int result;

	printf("세 수를 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("계산과정은 (num1-num2\)x(num2+num3)x(num3%%num1)입니다. \n");

	result = (num1 - num2) * (num2 + num3) * (num3 % num1);

	printf("결과 : %d", result);


	system("pause");
	return 0;
}