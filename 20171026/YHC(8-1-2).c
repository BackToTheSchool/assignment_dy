#include <stdio.h>
#include <stdlib.h>

int main()
{
	//2개의 정수를 입력받아 차를 구한다. 단, 입력순서에 관계없이 큰수에서 작은수를 빼야한다. 즉, 출력결과는 양수여야한다.
	int a1, a2;

	printf("두개의 정수를 입력하시오 : ");
	scanf_s("%d %d", &a1, &a2);

	if (a1 > a2)
		printf("두 수의 차 : %d", a1 - a2);
	else
		printf("두 수의 차 : %d", a2 - a1);

	system("pause");
	return 0;
}