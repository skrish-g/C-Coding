#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Enter the 1st number:\n");
	scanf("%d", &num1);
	printf("Enter the 2nd number:\n");
	scanf("%d", &num2);
	if(num1>num2)
	{
		printf("%d is the largest number.", num1);
	}
	else
	{
		printf("%d is the largest number.", num2);
	}
}