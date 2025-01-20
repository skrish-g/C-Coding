#include <stdio.h>
int main()
{
	int a=2, b=1, c;
	c=(a+=3, b+=2, a+b);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d", c);
}