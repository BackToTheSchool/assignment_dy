#include <stdio.h>
#include <stdlib.h>

double CtoF(double tem);
double FtoC(double tem);

int main()
{
	char type;
//	int type;
	int tem=0;
	printf("�µ����� ��ȯ�մϴ�. ������C, ȭ����F�� �Է��ϼ��� : ");
//	printf("�µ����� ��ȯ�մϴ�. ������1, ȭ����2�� �Է��ϼ��� : ");
	scanf_s("%c", &type);
//	scanf_s("%d", &type);
	printf("��ȯ�ϰ��� �ϴ� �µ��� ��Դϱ�? : ");
	scanf_s("%d", &tem);
	while (1)
	{
		if (type == 'C' || type == 'c')
//		if (type == 1)
		{
			printf("�־��� ������ ȭ���� ��ȯ�ϸ� %f�Դϴ�.", CtoF(tem));
			
			break;
		}
		else if (type == 'F' || type == 'f')
//		else if (type == 2)
		{
			printf("�־��� ȭ���� ������ ��ȯ�ϸ� %f�Դϴ�.", FtoC(tem));
			break;
		}
		else
			printf("�ٽ� �Է��ϼ���.");
	}

	system("pause");
	return 0;
}

double CtoF(double tem)
{
	return 1.8*tem + 32;
}

double FtoC(double tem)
{
	return (tem - 32) / 1.8;
}