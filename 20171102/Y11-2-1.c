#include <stdio.h>
#include <stdlib.h>

int main()
{
	char voca[100];
	int len = 0;

//	for (int i = 1; i < 100; i++)
//		voca[i] = 0;

	printf("영단어 입력 : ");
	scanf_s("%s", voca, sizeof(voca));

	while (voca[len] != '\0')
		len++;

	printf("길이는 %d이다. \n", len);

	system("pause");
	return 0;
}
