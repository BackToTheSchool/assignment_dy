#include <stdio.h>
#include <stdlib.h>

void Buy4zero(void);

int main()
{
	printf("����� �����ϰ� �ִ� �ݾ��� 3500���Դϴ�. \n");
	printf("��-500��, �����-700��, �ݶ�-400���Դϴ�. \n");
	printf("�� �� �ܵ��� ������ �ʰ� ��� ����� ������ �����ϴ�. \n");
	Buy4zero();

	system("pause");
	return 0;
}

void Buy4zero(void)
{
	int bbang=1, saewoo=1, cola=1;
	
	for (; bbang * 500 + saewoo * 700 + cola * 400 <= 3500; bbang++)
	{
		for (; bbang * 500 + saewoo * 700 + cola * 400 <= 3500; saewoo++)
		{
			for (; bbang * 500 + saewoo * 700 + cola * 400 <= 3500; cola++)
			{
				if (bbang * 500 + saewoo * 700 + cola * 400 == 3500)
					printf("�� : %d��, ����� : %d��, �ݶ� : %d�� \n", bbang, saewoo, cola);
			}
			cola = 1;
		}
		saewoo = 1;
	}
}