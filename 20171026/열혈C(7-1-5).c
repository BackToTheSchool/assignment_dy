#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int inte;
	double ave = 0;
	int count = 1;

	printf("입력한 정수들의 평균을 구합니다. 몇개의 수를 입력하시겠습니까? : ");
	scanf_s("%d", &num);

	while (num > 0)
	{
		printf("%d번째 정수를 입력하시오 : ", count);
		scanf_s("%d", &inte);
		ave = (ave + inte) / 2;

		num--;
		count++;
	}

	printf("평균값 : %lf", ave);

	system("pause");
	return 0;
}