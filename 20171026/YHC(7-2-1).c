#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 0;
	int count = 1;
	int sum = 0;

	printf("�ټ����� ���� ������ ���մϴ�. \n");

	while (count<6)
	{
		printf("%d��° ������ �Է��Ͻÿ�. : ", count);
		scanf_s("%d", &num);
		
		while (num < 1)
		{
			printf("Ʋ�����Դϴ�. ���� ������ �Է����ֽʽÿ�. : ");
			scanf_s("%d", &num);
		}
		sum += num;
		count++;
	}

	printf("�ټ����� ���������� ���� %d�Դϴ�.", sum);

	system("pause");
	return 0;
}