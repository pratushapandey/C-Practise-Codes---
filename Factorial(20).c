#include<stdio.h>

//   ITERATIVE WAY TO CALCULATE THE FACTORIAL OF A NUMBER

int main()
{
	int n, fact=1;
	
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	printf("The factorial is:\n");
	for(int i=1; i<=n; i++)
	{
		fact = fact*i;
	}
	printf("%d\n",fact);
	return 0;
}
