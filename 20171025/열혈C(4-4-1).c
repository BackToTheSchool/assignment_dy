#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;
	
	printf("������ �Է� : ");
	scanf_s("%d", &num1);

	num2 = ~num1;

	++num2;

	printf("��°� : %d", num2);

	system("pause");
	return 0;
}
