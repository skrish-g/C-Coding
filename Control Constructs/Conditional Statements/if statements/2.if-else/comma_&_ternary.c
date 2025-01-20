#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d", &num);
	(num%2==0)?(printf("It is an Even number.\n"),printf("Multiple of 2")):printf("It is an Odd number.");
}