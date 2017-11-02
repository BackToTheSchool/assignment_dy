#include <stdio.h>
#include <stdlib.h>

//초를 입력받으면 [시분초] 형태로 출력하라.

void TimeReturn(int num);

int main()
{
	int sec;
	printf("초를 시-분-초로 변환합니다. 입력할 초 : ");
	scanf_s("%d", &sec);
	TimeReturn(sec);

	system("pause");
	return 0;
}


void TimeReturn(int num)
{
	int hour, min, sec;
	hour = num / 3600;
	min = (num - 3600 * hour) / 60;
	sec = num - 3600 * hour - min * 60;
	printf("%d시간 %d분 %d초 입니다. \n", hour, min, sec);
}
