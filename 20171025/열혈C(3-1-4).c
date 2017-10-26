#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2;

	printf("두 수를 입력하시오. 앞의 수를 뒤의 수로 나눕니다. \n");
	scanf_s("%d %d", &num1, &num2);

	printf("%d는 몫이고 %d는 나머지입니다.\n", num1 / num2, num1 % num2);


	system("pause");
	return 0;
}