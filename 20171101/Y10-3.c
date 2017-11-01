#include <stdio.h>
#include <stdlib.h>

void TGCD(num1, num2);

int main()
{
	int num1, num2;
	printf("최대공약수를 찾습니다. 두 수를 입력하시오. ");
	scanf_s("%d %d", &num1, &num2);
	TGCD(num1, num2);

	system("pause");
	return 0;
}

void TGCD(num1, num2)
{
	int smln;

	if (num1 == num2)
	{
		printf("%d와 %d의 최대공약수는 %d이다. \n", num1, num2, num1);
		
	}
	else
	{
		smln = (num1 > num2) ? num2 : num1;
		for (; smln > 0; smln--)
		{
			if (num1 % smln == 0 && num2 % smln == 0)
			{
				printf("%d와 %d의 최대공약수는 %d이다. \n", num1, num2, smln);
				break;
			}
			else if( smln ==1)
				printf("%d와 %d의 최대공약수는 %d이다. \n", num1, num2, smln);
		}
	}	
}