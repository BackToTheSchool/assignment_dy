#include <stdio.h>
#include <stdlib.h>

//�ʸ� �Է¹����� [�ú���] ���·� ����϶�.

void TimeReturn(int num);

int main()
{
	int sec;
	printf("�ʸ� ��-��-�ʷ� ��ȯ�մϴ�. �Է��� �� : ");
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
	printf("%d�ð� %d�� %d�� �Դϴ�. \n", hour, min, sec);
}
