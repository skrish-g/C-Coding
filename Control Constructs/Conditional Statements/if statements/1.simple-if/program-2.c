#include <stdio.h>
int main()
{
	int age;
	printf("Enter your Age:\n");
	scanf("%d", &age);
	if(age>=18)
	{
		printf("You are eligible to cast your vote.\n");
	}
	printf("Thank you for being a good citizen.");
}
	