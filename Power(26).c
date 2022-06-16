#include<stdio.h>

//     CALCULATE THE POWER OF THE NUMBER IN ITERATIVE WAY

int main()
{
	int base,expo;
	int result=1;
	
	printf("Enter the base number:\n");
	scanf("%d",&base);
	
	printf("Enter the exponent:\n");
	scanf("%d",&expo);
	
	while(expo!=0)
	{
		result=result*base;
		expo--;
	}
	printf("The power of the number is:\n%d",result);
	
	return 0;
}
