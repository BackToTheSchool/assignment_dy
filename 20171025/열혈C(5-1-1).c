// 두 점 x,y 좌표를 입력받아서 두 점이 이루는 직사각형의 넓이를 계산하라
// 단 좌 상단의 각 x, y값은 우 하단의 x, y값보다 작다. 좌상단의 좌표를 먼저 받는다.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x1, y1;
	int x2, y2;
	printf("좌 상단의 x :");
	scanf_s("%d", &x1);
	printf("좌 상단의 y :");
	scanf_s("%d", &y1);

	printf("우 하단의 x :");
	scanf_s("%d", &x2);
	printf("우 하단의 y :");
	scanf_s("%d", &y2);

	printf("직사각형의 넓이 : %d", (x2-x1)*(y2-y1));

	system("pause");
	return 0;
}