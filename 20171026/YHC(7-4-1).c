#include <stdio.h>
#include <stdlib.h>

int main()
{
	//입력받은 두 정수 사이의 모든 수를 더한다. 단, 처음수는 다음수보다 작다.
	int num1, num2;
	int total=0;
	printf("정수 두개를 입력하시오. 단, 다음에 입력한 수가 더 커야합니다. : ");
	scanf_s("%d %d", &num1, &num2);

	for ( ; num1<num2+1 ; num1++)
	{
		total += num1;
	}
	
	printf("총 합 : %d", total);
	system("pause");
	return 0;
}