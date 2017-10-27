#include <stdio.h>
#include <stdlib.h>

int main()
{
	//책 내부 if else 문제 변형
	int num;
	printf("수를 입력 : ");
	scanf_s("%d", &num);

	/*
	if (0<=n && n<10)
		printf("0이상 10미만");
	else if (10<=n && n<20)
		printf("10이상 20미만");
	else if (20<=n && n<30)
		printf("20이상 30미만");
	else
		printf("30이상");	
	*/
	switch (num)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		printf("0이상 10미만");
		break;

	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	
		printf("11이상 20미만");
		break;

	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
		printf("20이상 29미만");
		break;

	//정답은 switch(n/10)을 넣는 것.

	default:
		printf("30이상");
	}	
	system("pause");
	return 0;
}