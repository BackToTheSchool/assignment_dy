#include <stdio.h>
#include <stdlib.h>

// 2^n�� ���ϴ� �Լ��� ��������� �����϶�.

int jegob(int num);

int main()
{
	int n;
	printf("n�� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	printf("2^n�� %d", jegob(n));

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