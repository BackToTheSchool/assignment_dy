#include <stdio.h>
#include <stdlib.h>

// 10���� �Ҽ��� ���մϴ�.
void FindPrime(void);

int main()
{
	FindPrime();
	system("pause");
	return 0;
}

void FindPrime(void)
{
	int num1=2; //����
	int num2=1; //num1�� num2�� ������ 0�� �Ǹ�
	int cnt1 = 0; // �� ��ġ�� �ö󰡰� 2�� �Ǹ� �� ���� 
	int cnt2 = 0;
	for (;;num1++)
	{
		num2 = 1;
		for (;num1>=num2;num2++)
		{
			if (num1%num2 == 0)
				cnt1 += 1;			
		}
		if (cnt1 == 2)
		{
			printf("%d ", num1);
			cnt2 += 1;			
		}
		cnt1 = 0;
		if (cnt2 == 10)			
			break;
	}

}