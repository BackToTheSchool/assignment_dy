#include <stdio.h>
#include <stdlib.h>

int main()
{
	int total=0;
	int num = 100;
	
	do
	{
		total += num;
		num -= 2;


	} while (num > 1);

	printf("0에서100까지 짝수의 총합 : %d", total);
	system("pause");
	return 0;
}