#include <stdio.h>
#include <stdlib.h>

double CtoF(double tem);
double FtoC(double tem);

int main()
{
	char type;
//	int type;
	int tem=0;
	printf("온도값을 변환합니다. 섭씨면C, 화씨면F를 입력하세요 : ");
//	printf("온도값을 변환합니다. 섭씨면1, 화씨면2를 입력하세요 : ");
	scanf_s("%c", &type);
//	scanf_s("%d", &type);
	printf("변환하고자 하는 온도가 몇도입니까? : ");
	scanf_s("%d", &tem);
	while (1)
	{
		if (type == 'C' || type == 'c')
//		if (type == 1)
		{
			printf("주어진 섭씨를 화씨로 변환하면 %f입니다.", CtoF(tem));
			
			break;
		}
		else if (type == 'F' || type == 'f')
//		else if (type == 2)
		{
			printf("주어진 화씨를 섭씨로 변환하면 %f입니다.", FtoC(tem));
			break;
		}
		else
			printf("다시 입력하세요.");
	}

	system("pause");
	return 0;
}

double CtoF(double tem)
{
	return 1.8*tem + 32;
}

double FtoC(double tem)
{
	return (tem - 32) / 1.8;
}