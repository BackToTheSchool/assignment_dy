#include <stdio.h>
#include <stdlib.h>

int main()
{
	//1이상 100미만 정수중 7또는 9의 배수를 출력하라. 7과 9의 배수가 2번출력되선 안된다.
	int num = 1;

	while (num < 100)
	{
		if (num%7==0 || num%9==0)
			printf("%d \n", num);
		num++;
	}
	system("pause");
	return 0;
}