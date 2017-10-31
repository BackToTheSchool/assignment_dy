#include <stdio.h>
#include <stdlib.h>

void NAZZI(int num);

int main()
{
	printf("피보나치 수열을 출력합니다. 몇개까지 하시겠습니까? : ");
	int num;
	scanf_s("%d", &num);
	if (num < 1)
		printf("1이상의 값을 입력해주십시오. \n");
	else
		NAZZI(num);

	system("pause");
	return 0;
}

void NAZZI(int num)
{
	int a = 0;
	int b = 1;
	int c = 0;	
	int cnt = 0;

	if (num == 1)
	{
		printf("%d \n", a);
	}
	else
		printf("%d %d ", a, b);

	for (;num-2>cnt;cnt++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d ", c);

	}
}