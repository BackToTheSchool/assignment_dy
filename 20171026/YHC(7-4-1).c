#include <stdio.h>
#include <stdlib.h>

int main()
{
	//�Է¹��� �� ���� ������ ��� ���� ���Ѵ�. ��, ó������ ���������� �۴�.
	int num1, num2;
	int total=0;
	printf("���� �ΰ��� �Է��Ͻÿ�. ��, ������ �Է��� ���� �� Ŀ���մϴ�. : ");
	scanf_s("%d %d", &num1, &num2);

	for ( ; num1<num2+1 ; num1++)
	{
		total += num1;
	}
	
	printf("�� �� : %d", total);
	system("pause");
	return 0;
}