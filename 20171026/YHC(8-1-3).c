#include <stdio.h>
#include <stdlib.h>

int main()
{
	// �л��� ������ �� ������ ��������� ���� ������ ����Ѵ�. 90�̻�A, 80�̻�B, 70�̻�C, 50�̻�D, 50�̸�F.
	int ko, en, ma;
	printf("�� ������ ������ �Է��Ͻÿ�. ���� ���� ���� : ");
	scanf_s("%d %d %d", &ko, &en, &ma);

	double ave = (ko + en + ma) / 3;

	if (ave > 90)
		printf("��������� %lf�� A�Դϴ�. \n", ave);
	else if (ave > 80)
		printf("��������� %lf�� B�Դϴ�. \n", ave);
	else if (ave > 70)
		printf("��������� %lf�� C�Դϴ�. \n", ave);
	else if (ave > 50)
		printf("��������� %lf�� D�Դϴ�. \n", ave);
	else
		printf("��������� %lf�� F�Դϴ�. \n", ave);

	system("pause");
	return 0;
}