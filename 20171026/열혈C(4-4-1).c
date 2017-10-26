#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;
	
	printf("정수를 입력 : ");
	scanf_s("%d", &num1);

	num2 = ~num1;

	++num2;

	printf("출력값 : %d", num2);

	system("pause");
	return 0;
}
