#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int count = 0;

	printf("받은 양의 정수만큼 Hello World를 출력합니다. 입력할 수 : ");
	scanf_s("%d", &num);
	while(count < num)
	{
		printf("Hello World \n");
		count++;
	}

	system("pause");
	return 0;
}