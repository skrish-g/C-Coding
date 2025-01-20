#include<stdio.h>
int main()
{
	int a=45;
	a=95;
	int *ptr=&a;
	printf("%d", *ptr);
}