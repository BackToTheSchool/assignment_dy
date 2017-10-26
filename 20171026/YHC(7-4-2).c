#include <stdio.h>
#include <stdlib.h>

int main()
{
	// n!=1x2x...xn을 작성하라
	int n=0;
	int res=1;

	printf("n!을 계산합니다. n : ");
	scanf_s("%d", &n);

	for(;n>0;n--)
	{
		res *= n;
	}
	printf("n! = %d", res);

	system("pause");
	return 0;
}