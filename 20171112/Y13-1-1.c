#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int * ptr = arr;
	int i = 0, j = 0;

	for (; i < 5; i++)
	{
		*ptr += 2;
		ptr++;
	}

	for (; j < 5; j++)
		printf("%d ", arr[j]);

	system("pause");
	return 0;
}
