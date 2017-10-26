#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int count = 9;

	printf("입력한 수에 대한 구구단을 역순으로 출력합니다. 입력할 수 : \n");
	scanf_s("%d", &num);

	while (count > 0)
	{
		printf("%d x %d = %d \n", num, count, num*count);
		count--;
	}

	system("pause");
	return 0;
}