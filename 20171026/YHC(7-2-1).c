#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 0;
	int count = 1;
	int sum = 0;

	printf("다섯개의 양의 정수를 더합니다. \n");

	while (count<6)
	{
		printf("%d번째 정수를 입력하시오. : ", count);
		scanf_s("%d", &num);
		
		while (num < 1)
		{
			printf("틀린값입니다. 양의 정수를 입력해주십시오. : ");
			scanf_s("%d", &num);
		}
		sum += num;
		count++;
	}

	printf("다섯개의 양의정수의 합은 %d입니다.", sum);

	system("pause");
	return 0;
}