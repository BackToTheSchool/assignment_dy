#include <stdio.h>
#include <stdlib.h>

// 10개의 소수를 구합니다.
void FindPrime(void);

int main()
{
	FindPrime();
	system("pause");
	return 0;
}

void FindPrime(void)
{
	int num1=2; //정수
	int num2=1; //num1을 num2로 나눠서 0이 되면
	int cnt1 = 0; // 이 수치가 올라가고 2가 되면 그 수는 
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