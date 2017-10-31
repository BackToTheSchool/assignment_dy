#include <stdio.h>
#include <stdlib.h>


//정답에서는 큰값과 작은값을 추출하는 함수 2개를 만들고 if문과 조건연산자를 사용해 훨씬 간략하게 나타냈다.
//각 함수에서 큰수와 작은수를 리턴한 후 printf("~", 함수명(변수,변수,변수)); 형태로 나타냄.

void FindBigof3(int a, int b, int c)
{
	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c)
	{
		printf("제일 큰 수는 %d입니다. \n", a);
		if (b >= c)
			printf("제일 작은수는 %d입니다. \n", c);
		else
			printf("제일 작은수는 %d입니다. \n", b);
	}
	else if (b >= a && b > c)
	{
		printf("제일 큰 수는 %d입니다. \n", b);
		if (a >= c)
			printf("제일 작은수는 %d입니다. \n", c);
		else
			printf("제일 작은수는 %d입니다. \n", a);
	}
	else (c >= a && c > b);
	{
		printf("제일 큰 수는 %d입니다. \n", c);
		if (a >= b)
			printf("제일 작은수는 %d입니다. \n", b);
		else
			printf("제일 작은수는 %d입니다. \n", a);
	}
}

int main()
{
	int num1=0, num2=0, num3=0;
	printf("세 수를 입력하시오. : ");
	FindBigof3(num1, num2, num3);

	system("pause");
	return 0;
}

