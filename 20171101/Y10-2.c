#include <stdio.h>
#include <stdlib.h>

void ggdan(num1, num2);

int main()
{
	int num1 = 0, num2 = 0;
	printf("�Է��Ͻ� ���� �ٸ� �� �� ������ �������� ����մϴ�. : ");
	scanf_s("%d %d", &num1, &num2);
	while(1)
	if (num1 == num2)
	{
		printf("�ٸ� ���� �Է��Ͻÿ�. : ");
		scanf_s("%d %d", &num1, &num2);
	}
	else
	{
		ggdan(num1, num2);
		break;
	}
	
	system("pause");
	return 0;
}

void ggdan(num1, num2)
{
	int bign=0, smln=0;
	bign = (num1 > num2) ? num1 : num2;
	smln = (num1 < num2) ? num1 : num2;

	for (;bign-smln>=0;smln++)
	{
		for (int cnt = 1;cnt<10;cnt++)
			printf("%d x %d = %d \n", smln, cnt, smln*cnt);
	}	
}