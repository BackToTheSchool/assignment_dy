#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 학생의 국영수 세 과목의 평균점수에 대해 학점을 출력한다. 90이상A, 80이상B, 70이상C, 50이상D, 50미만F.
	int ko, en, ma;
	printf("세 과목의 점수를 입력하시오. 국어 영어 수학 : ");
	scanf_s("%d %d %d", &ko, &en, &ma);

	double ave = (ko + en + ma) / 3;

	if (ave > 90)
		printf("평균점수는 %lf로 A입니다. \n", ave);
	else if (ave > 80)
		printf("평균점수는 %lf로 B입니다. \n", ave);
	else if (ave > 70)
		printf("평균점수는 %lf로 C입니다. \n", ave);
	else if (ave > 50)
		printf("평균점수는 %lf로 D입니다. \n", ave);
	else
		printf("평균점수는 %lf로 F입니다. \n", ave);

	system("pause");
	return 0;
}