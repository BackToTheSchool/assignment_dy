#include <stdio.h>
#include <stdlib.h>


//���信���� ū���� �������� �����ϴ� �Լ� 2���� ����� if���� ���ǿ����ڸ� ����� �ξ� �����ϰ� ��Ÿ�´�.
//�� �Լ����� ū���� �������� ������ �� printf("~", �Լ���(����,����,����)); ���·� ��Ÿ��.

void FindBigof3(int a, int b, int c)
{
	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c)
	{
		printf("���� ū ���� %d�Դϴ�. \n", a);
		if (b >= c)
			printf("���� �������� %d�Դϴ�. \n", c);
		else
			printf("���� �������� %d�Դϴ�. \n", b);
	}
	else if (b >= a && b > c)
	{
		printf("���� ū ���� %d�Դϴ�. \n", b);
		if (a >= c)
			printf("���� �������� %d�Դϴ�. \n", c);
		else
			printf("���� �������� %d�Դϴ�. \n", a);
	}
	else (c >= a && c > b);
	{
		printf("���� ū ���� %d�Դϴ�. \n", c);
		if (a >= b)
			printf("���� �������� %d�Դϴ�. \n", b);
		else
			printf("���� �������� %d�Դϴ�. \n", a);
	}
}

int main()
{
	int num1=0, num2=0, num3=0;
	printf("�� ���� �Է��Ͻÿ�. : ");
	FindBigof3(num1, num2, num3);

	system("pause");
	return 0;
}

