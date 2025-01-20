#include <stdio.h>
int main()
{
	int amt, dayslate;
	printf("Enter the amount to pay:\n");
	scanf("%d", &amt);
	printf("Enter the no. of days by which the payment is delayed:\n");
	scanf("%d", &dayslate);
	if(dayslate>0)
	{
		amt=amt + dayslate*170;
	}
	printf("Final amount to be paid: %d", amt);
}