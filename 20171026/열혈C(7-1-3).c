#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 1;
	int count = 0;

	printf("�Է��� ���� ��� ���մϴ�. \n");

	while (num != 0)
	{
		printf("0�� ������ �����մϴ�. �Է��� �� : ");
		scanf_s("%d", &num);
		printf("\n");

		count = count + num;
		printf("������� �Է��� ���� ���� %d�Դϴ�.\n", count);
	}

	system("pause");
	return 0;
}