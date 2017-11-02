#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arr[9] = "Good time";

	int arrlen = sizeof(arr) / sizeof(char);

	for (int i = 0; i < arrlen; i++)
	{
		printf("%c", arr[i]);
	}

	system("pause");
	return 0;
}
