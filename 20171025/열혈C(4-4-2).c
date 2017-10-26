#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 3x8/4 이 연산의 결과를 출력하는 프로글매을 작성하라. 난 *와/연산자를 사용해선 안된다.
	// 반드시 곰셈에 대응하는 연산과 나눗셈에 대응하는 연산을 거쳐야 한다.
	int num1 = 3;
	int result;

	result = num1 << 3;
	result = result >> 2;
	 
	printf("%d", result);

	system("pause");
	return 0;
}


