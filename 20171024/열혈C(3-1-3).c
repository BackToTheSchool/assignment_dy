#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;

	printf("한 수를 입력받아서 제곱을 합니다 \n");
	printf("아무 정수나 입력하시오 \n");

	scanf_s("%d", &num1);
	num2 = num1*num1;

	printf("%d는 %d의 제곱입니다.", num2, num1);

	system("pause");

	return 0;
}