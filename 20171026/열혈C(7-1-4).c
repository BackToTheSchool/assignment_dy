#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int count = 9;

	printf("�Է��� ���� ���� �������� �������� ����մϴ�. �Է��� �� : \n");
	scanf_s("%d", &num);

	while (count > 0)
	{
		printf("%d x %d = %d \n", num, count, num*count);
		count--;
	}

	system("pause");
	return 0;
}