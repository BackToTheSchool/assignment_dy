#include <stdio.h>
#include <stdlib.h>


int main()
{
	int len = 0; // �ܾ��� ���̸� ã����
	int cnt = 0; // ������ ���� �迭�� �־��ִµ� ����Ϸ��� ��
	
	char voca[100]; 
	char reversevoca[100];
	
	for (int i = 0; i < 100; i++)
	{
		voca[i] = '\0';
		reversevoca[i] = '\0';
	}

	printf("���ܾ �������� �������ϴ�. �Է��ϼ��� : ");
	scanf_s("%s", voca, sizeof(voca));


	while (voca[len] != 0) // �Էµ� �κ��� ������ ���� ���� null���� ������ �̰ɷ� �ܾ� ���̸� ã�� �� ����
		len++;

	while (len != 0) // �ܾ� ���̸�ŭ �������� �־���
	{
		reversevoca[cnt] = voca[len-1]; // �迭�� 0���� ����.
		len--;
		cnt++;
	}

	printf("�������� ���ܾ� : %s \n", reversevoca);

	system("pause");
	return 0;
}
