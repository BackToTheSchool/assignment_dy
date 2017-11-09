#include <stdio.h>
#include <stdlib.h>

// int형 변수 2개 선언과 동시에 10, 20으로 초기화
// 포인터변수 2개로 각각 가리키게 함
// 첫 수를 10증가, 두번째 수를 10 감소시키고
// 두 포인터변수가 다리키는 대상을 서로 바꾼다
// 마지막으로 두 포인터 변수가 가리키는 변수에 저장된 값을 출력한다.


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
