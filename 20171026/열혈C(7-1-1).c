#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int count = 0;

	printf("���� ���� ������ŭ Hello World�� ����մϴ�. �Է��� �� : ");
	scanf_s("%d", &num);
	while(count < num)
	{
		printf("Hello World \n");
		count++;
	}

	system("pause");
	return 0;
}