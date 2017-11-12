#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int *ptr1 = &arr[0];
	int *ptr2 = &arr[5];
	int temp;

	for (int i = 0;i<3;i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;

		ptr2--;
		ptr1++;
	}
/*
	// 초기에 시도했던 틀린 문장

	for (int i = 0;i<3;i++)
   {
      temp = arr[i];

      arr[i] = *ptr2;
      *ptr1 = temp;
      arr[5 - i] = *ptr1;

      ptr2--;
      ptr1++;
   }
*/

	printf("%d %d %d %d %d %d ", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
	
	system("pause");
	return 0;
}