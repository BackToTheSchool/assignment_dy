#include <stdio.h>
#include <stdlib.h>

int main()
{
	//2���� ������ �Է¹޾� ���� ���Ѵ�. ��, �Է¼����� ������� ū������ �������� �����Ѵ�. ��, ��°���� ��������Ѵ�.
	//���� �����ڸ� ����϶�.

	int a1, a2, res;

	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a1, &a2);

	res = a1 > a2 ? a1 - a2 : a2 - a1;
	printf("�� ���� �� : %d \n", res);

	/*
	if (a1 > a2)
		printf("�� ���� �� : %d", a1 - a2);
	else
		printf("�� ���� �� : %d", a2 - a1);
	*/

	system("pause");
	return 0;
}