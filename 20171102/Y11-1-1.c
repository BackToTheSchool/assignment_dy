#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[5];
	printf("5���� ���� �� �ִ�, �ּڰ��� ã�� ������ ���մϴ�. \n�Է��Ͻÿ� : ");
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
	printf(" �ִ밪 : %d \n �ּҰ� : %d \n ���� : %d \n", bignum, smlnum, sum);

	system("pause");
	return 0;
}
