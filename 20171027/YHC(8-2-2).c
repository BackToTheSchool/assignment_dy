#include <stdio.h>
#include <stdlib.h>

int main()
{
	//AZ+ZA=99�� �����ϴ� ��� A, Z�� ���ϴ� ���α׷��� �ۼ��϶�.
	int A = 0, Z;
	for (; A < 10; A++)
	{
		Z = 0;
		while (1)
		{
			if (11*A + 11*Z == 99)
			{
				printf("A=%d, Z=%d \n", A, Z);
				break;
			}				
			Z++;
		}
	}
	system("pause");
	return 0;
}