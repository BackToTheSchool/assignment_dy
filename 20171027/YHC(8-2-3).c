#include <stdio.h>
#include <stdlib.h>

int main()
{
	//å ���� if else ���� ����
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	/*
	if (0<=n && n<10)
		printf("0�̻� 10�̸�");
	else if (10<=n && n<20)
		printf("10�̻� 20�̸�");
	else if (20<=n && n<30)
		printf("20�̻� 30�̸�");
	else
		printf("30�̻�");	
	*/
	switch (num)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		printf("0�̻� 10�̸�");
		break;

	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	
		printf("11�̻� 20�̸�");
		break;

	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
		printf("20�̻� 29�̸�");
		break;

	//������ switch(n/10)�� �ִ� ��.

	default:
		printf("30�̻�");
	}	
	system("pause");
	return 0;
}