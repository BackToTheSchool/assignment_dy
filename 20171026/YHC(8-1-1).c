#include <stdio.h>
#include <stdlib.h>

int main()
{
	//1�̻� 100�̸� ������ 7�Ǵ� 9�� ����� ����϶�. 7�� 9�� ����� 2����µǼ� �ȵȴ�.
	int num = 1;

	while (num < 100)
	{
		if (num%7==0 || num%9==0)
			printf("%d \n", num);
		num++;
	}
	system("pause");
	return 0;
}