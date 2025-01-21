#include <stdio.h>
int main()
{
	int num1, num2, choice, result;
	printf("Choose an operator:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	printf("Enter your choice(1-4):\n");
	scanf("%d", &choice);
	printf("Enter the first number:\n");
	scanf("%d", &num1);
	printf("Enter the second number:\n");
	scanf("%d", &num2);
	int flag=1;
	if(choice==1)
	{
		result=num1+num2;
	}
	else if(choice==2)
	{
		result=num1-num2;
	}
	else if(choice==3)
	{
		result=num1*num2;
	}
	else if(choice==4)
	{
		result=num1/num2;
	}
	else
	{
		printf("Invalid choice");
		flag=0;
	}
	if(flag==1)
	{
		printf("Result: %d", result);
	}
}