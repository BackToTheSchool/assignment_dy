#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cntin = 0;
	int cntout = 5;

	while (cntin < 5)
	{
		while (cntout < 5)
		{
			printf("O ");
			cntout++;
		}
		cntout = 4 - cntin;
		printf("* \n");
		cntin++;
	}

	system("pause");
	return 0;
}