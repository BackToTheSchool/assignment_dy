#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int count = 0;

	printf("���� ���� ������ŭ 3�ǹ���� ����մϴ�.. �Է��� �� : ");
	scanf_s("%d", &num);
	while (count < num)
	{
		printf("%d \n", 3*count+3);
		count++;
	}

	system("pause");
	return 0;
}