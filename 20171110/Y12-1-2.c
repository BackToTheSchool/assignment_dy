#include <stdio.h>
#include <stdlib.h>

// int�� ���� 2�� ����� ���ÿ� 10, 20���� �ʱ�ȭ
// �����ͺ��� 2���� ���� ����Ű�� ��
// ù ���� 10����, �ι�° ���� 10 ���ҽ�Ű��
// �� �����ͺ����� �ٸ�Ű�� ����� ���� �ٲ۴�
// ���������� �� ������ ������ ����Ű�� ������ ����� ���� ����Ѵ�.


int main()
{

	int num1 = 10, num2 = 20;
	int ptr3;

	int * ptr1 = &num1;
	int * ptr2 = &num2;
	

	*ptr1 += 10;
	*ptr2 -= 10;

	ptr3 = ptr1;
	ptr1 = ptr2;
	ptr2 = ptr3;

	printf("%d", *ptr1);
	printf("%d", *ptr2);

	system("pause");
	return 0;
}
