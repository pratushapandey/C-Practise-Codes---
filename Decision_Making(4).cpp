#include<stdio.h>

//          DECISION MAKING
/*                          Given an integer N. Your task is to check if the integer is greater than, less than or equal to 5.
                            If the integer is greater than 5, then print "Greater than 5" (without quotes).
                            If the integer is less than 5, then print "Less than 5".
                            If the integer is equal to 5, then print "Equal to 5".                    */

int main()
{
	int n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	
	if(n>5)
	{
		printf("Greater than 5");
	}
	else if(n<5)
	{
		printf("Less than 5");
	}
	else if(n=5)
	{
		printf("Equal to 5");
	}
	else
	{
		printf("Invalid");
	}
    return 0;
}
