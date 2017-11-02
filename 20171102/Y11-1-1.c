#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[5];
	printf("5개의 정수 중 최댓값, 최솟값을 찾고 총합을 구합니다. \n입력하시오 : ");
	for (int i=0; i < 5; i++)
		scanf_s("%d", &arr[i]);
	
	int bignum = arr[0];
	for (int i = 0; i < 5; i++)
	{		
		if (arr[i] > bignum)
			bignum = arr[i];
	}
		
	int smlnum = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < smlnum)
			smlnum = arr[i];
	}
	
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	printf(" 최대값 : %d \n 최소값 : %d \n 총합 : %d \n", bignum, smlnum, sum);

	system("pause");
	return 0;
}
