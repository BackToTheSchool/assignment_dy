#include <stdio.h>
#include <stdlib.h>

int main()
{
	// n!=1x2x...xn�� �ۼ��϶�
	int n=0;
	int res=1;

	printf("n!�� ����մϴ�. n : ");
	scanf_s("%d", &n);

	for(;n>0;n--)
	{
		res *= n;
	}
	printf("n! = %d", res);

	system("pause");
	return 0;
}