#include <stdio.h>
#include <stdlib.h>

// 2^n을 구하는 함수를 재귀적으로 구현하라.

int jegob(int num);

int main()
{
	int n;
	printf("n을 입력하시오 : ");
	scanf_s("%d", &n);
	printf("2^n은 %d", jegob(n));

	system("pause");
	return 0;
}

int jegob(int num)
{
	int two = 2;
	if (num == 0)
		return 1;
	else 
		return two = two * jegob(num - 1);	 	
}