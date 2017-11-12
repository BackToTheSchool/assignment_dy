#include <stdio.h>
#include <stdlib.h>

// 이번엔 변수 ptr에 저장된 값을 변경시키지 않고, ptr을 대상으로 덧셈연삼을 하여, 그 결과로 반환되는 주소값을 통해 모든 배열요소에 접근하여 값을 2씩 증가시키는 예제를 작성.

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