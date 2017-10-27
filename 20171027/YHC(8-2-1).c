#include <stdio.h>
#include <stdlib.h>

int main()
{
	//구구단을출력. 난 2, 4, 6 ,8단만 출력. 그리고 2단은 2x2, 4단은 4x4, 6단은 6x6, 8단은 8x8단까지 출력.

	int dan = 2;
	

	for(;dan<9; dan++)
	{
		int gob = 1;

		if (dan % 2 == 1)
			continue;

		while(1)
		{
			printf("%d x %d = %d \n", dan, gob, dan*gob);
			if (gob==dan)
				break;
			gob++;
		}		
	}
	system("pause");
	return 0;
}