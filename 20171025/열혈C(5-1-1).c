// �� �� x,y ��ǥ�� �Է¹޾Ƽ� �� ���� �̷�� ���簢���� ���̸� ����϶�
// �� �� ����� �� x, y���� �� �ϴ��� x, y������ �۴�. �»���� ��ǥ�� ���� �޴´�.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x1, y1;
	int x2, y2;
	printf("�� ����� x :");
	scanf_s("%d", &x1);
	printf("�� ����� y :");
	scanf_s("%d", &y1);

	printf("�� �ϴ��� x :");
	scanf_s("%d", &x2);
	printf("�� �ϴ��� y :");
	scanf_s("%d", &y2);

	printf("���簢���� ���� : %d", (x2-x1)*(y2-y1));

	system("pause");
	return 0;
}