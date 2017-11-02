#include <stdio.h>
#include <stdlib.h>

// 숫자 n을 입력받고 2^k<=n 을 만족하는 k의 최댓값을 구하여라.

int main()
{
	int n;
	printf("2^k<=n 을 만족하는 k의 최댓값을 구합니다. n을 입력하시오. : ");
	scanf_s("%d", &n);
	printf("k는 %d입니다. \n", FindK(n));

	system("pause");
	return 0;
}

int FindK(int n)
{
	int two = 2;
	int k = 0;
	for (;two<=n; k++)
	{
		/*
		if (n == 1)
		{
			k = 0;
			break;
		}
		else if (n == 2)
		{
			k = 1;
			break;
		}
		*/
		two *= 2;
	}
	return k;
}