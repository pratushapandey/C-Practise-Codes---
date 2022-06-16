#include<stdio.h>

//             CALCULATE THE LENGTH OF THE NUMBER 
//      INPUT = 13                ||    OUTPUT = 2

int main()
{
	int n,count=0;
	
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	do
	{
		n=n/10;
		count++;
	}while(n!=0);
	
	printf("Number of digits:\n%d",count);
	
	return 0;
}
