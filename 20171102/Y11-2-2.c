#include <stdio.h>
#include <stdlib.h>


int main()
{
	int len = 0; // 단어의 길이를 찾아줌
	int cnt = 0; // 뒤집기 위한 배열에 넣어주는데 사용하려는 수
	
	char voca[100]; 
	char reversevoca[100];
	
	for (int i = 0; i < 100; i++)
	{
		voca[i] = '\0';
		reversevoca[i] = '\0';
	}

	printf("영단어를 역순으로 뒤집습니다. 입력하세요 : ");
	scanf_s("%s", voca, sizeof(voca));


	while (voca[len] != 0) // 입력된 부분을 제외한 곳에 전부 null값이 들어감으로 이걸로 단어 길이를 찾을 수 있음
		len++;

	while (len != 0) // 단어 길이만큼 역순으로 넣어줌
	{
		reversevoca[cnt] = voca[len-1]; // 배열은 0부터 시작.
		len--;
		cnt++;
	}

	printf("뒤집어진 영단어 : %s \n", reversevoca);

	system("pause");
	return 0;
}
