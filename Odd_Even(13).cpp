#include<stdio.h>
// CALCULATE THE NUMBER IS ODD OR EVEN

int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("The number is an even number");
	}
	else
	{
		printf("The number is odd number");
	}
	return 0;
}
