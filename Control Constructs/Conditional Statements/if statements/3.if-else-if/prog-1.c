#include <stdio.h>
int main()
{
	int num;
	printf("Enter your number:\n");
	scanf("%d", &num);
	if(num>0)
	{
		printf("It is a positive number.");
	}
	else if(num<0)
	{
		printf("It is a negative number.");
	}
	else if(num==0)
	{
		printf("It is Zero number.");
	}
}