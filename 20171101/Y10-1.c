#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;

	printf("10진수를 입력하면 16진수로 바꿉니다. : ");
	scanf_s("%d", &num);
	printf("변환하면 %x \n", num);

	system("pause");
	return 0;
}
