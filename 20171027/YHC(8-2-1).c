#include <stdio.h>
#include <stdlib.h>

int main()
{
	//�����������. �� 2, 4, 6 ,8�ܸ� ���. �׸��� 2���� 2x2, 4���� 4x4, 6���� 6x6, 8���� 8x8�ܱ��� ���.

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