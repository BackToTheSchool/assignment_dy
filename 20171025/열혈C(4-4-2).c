#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 3x8/4 �� ������ ����� ����ϴ� ���α۸��� �ۼ��϶�. �� *��/�����ڸ� ����ؼ� �ȵȴ�.
	// �ݵ�� ������ �����ϴ� ����� �������� �����ϴ� ������ ���ľ� �Ѵ�.
	int num1 = 3;
	int result;

	result = num1 << 3;
	result = result >> 2;
	 
	printf("%d", result);

	system("pause");
	return 0;
}


