#include <stdio.h>
#include <stdlib.h>

// ���� n�� �Է¹ް� 2^k<=n �� �����ϴ� k�� �ִ��� ���Ͽ���.

int main()
{
	int n;
	printf("2^k<=n �� �����ϴ� k�� �ִ��� ���մϴ�. n�� �Է��Ͻÿ�. : ");
	scanf_s("%d", &n);
	printf("k�� %d�Դϴ�. \n", FindK(n));

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