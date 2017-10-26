#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 1;
	int count = 0;

	printf("입력한 수를 모두 더합니다. \n");

	while (num != 0)
	{
		printf("0을 누를시 종료합니다. 입력할 수 : ");
		scanf_s("%d", &num);
		printf("\n");

		count = count + num;
		printf("현재까지 입력한 수의 합은 %d입니다.\n", count);
	}

	system("pause");
	return 0;
}