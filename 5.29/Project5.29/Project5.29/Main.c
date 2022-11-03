#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, i;
	printf("請輸入兩個整數(中間隔空格)：");
	scanf("%d %d", &a, &b);
	for (i = 1; i <= (a*b); i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			c = (a * b) / i;
		}
	}
	printf("最大公倍數為：%d\n", c);
	system("pause");
	return 0;
}
