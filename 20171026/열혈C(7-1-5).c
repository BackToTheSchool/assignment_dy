#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int inte;
	double ave = 0;
	int count = 1;

	printf("�Է��� �������� ����� ���մϴ�. ��� ���� �Է��Ͻðڽ��ϱ�? : ");
	scanf_s("%d", &num);

	while (num > 0)
	{
		printf("%d��° ������ �Է��Ͻÿ� : ", count);
		scanf_s("%d", &inte);
		ave = (ave + inte) / 2;

		num--;
		count++;
	}

	printf("��հ� : %lf", ave);

	system("pause");
	return 0;
}