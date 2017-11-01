#include <stdio.h>
#include <stdlib.h>

void Buy4zero(void);

int main()
{
	printf("당신이 소유하고 있는 금액은 3500원입니다. \n");
	printf("빵-500원, 새우깡-700원, 콜라-400원입니다. \n");
	printf("이 중 잔돈을 남기지 않고 사는 방법은 다음과 같습니다. \n");
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
					printf("빵 : %d개, 새우깡 : %d개, 콜라 : %d개 \n", bbang, saewoo, cola);
			}
			cola = 1;
		}
		saewoo = 1;
	}
}