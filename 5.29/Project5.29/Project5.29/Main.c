#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, i;
	printf("�п�J��Ӿ��(�����j�Ů�)�G");
	scanf("%d %d", &a, &b);
	for (i = 1; i <= (a*b); i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			c = (a * b) / i;
		}
	}
	printf("�̤j�����Ƭ��G%d\n", c);
	system("pause");
	return 0;
}
