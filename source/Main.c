#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char i, o;
	scanf("%c", &i);
	o = i + ('a' - 'A');
	printf("%c", o);
	system("pause");
	return 0;
}