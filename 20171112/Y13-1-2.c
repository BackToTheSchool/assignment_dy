#include <stdio.h>
#include <stdlib.h>

// �̹��� ���� ptr�� ����� ���� �����Ű�� �ʰ�, ptr�� ������� ���������� �Ͽ�, �� ����� ��ȯ�Ǵ� �ּҰ��� ���� ��� �迭��ҿ� �����Ͽ� ���� 2�� ������Ű�� ������ �ۼ�.

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int * ptr = arr;


	for (int i = 0; i < 5; i++)
		*(ptr+i) += 2;
	

	for (int j = 0; j < 5; j++)
		printf("%d ", arr[j]);

	system("pause");
	return 0;
}