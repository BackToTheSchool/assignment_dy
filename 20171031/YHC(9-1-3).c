#include <stdio.h>
#include <stdlib.h>

void NAZZI(int num);

int main()
{
	printf("�Ǻ���ġ ������ ����մϴ�. ����� �Ͻðڽ��ϱ�? : ");
	int num;
	scanf_s("%d", &num);
	if (num < 1)
		printf("1�̻��� ���� �Է����ֽʽÿ�. \n");
	else
		NAZZI(num);

	system("pause");
	return 0;
}

void NAZZI(int num)
{
	int a = 0;
	int b = 1;
	int c = 0;	
	int cnt = 0;

	if (num == 1)
	{
		printf("%d \n", a);
	}
	else
		printf("%d %d ", a, b);

	for (;num-2>cnt;cnt++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d ", c);

	}
}