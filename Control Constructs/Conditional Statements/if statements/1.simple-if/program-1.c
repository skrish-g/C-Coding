#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter the 1st Number:\n");
	scanf("%d", &a);
	printf("Enter the 2nd Number:\n");
	scanf("%d", &b);
	if(a==b)
	{
		printf("Both the numbers are equal\n");
	}
	printf("Verification Completed!");
}