#include<stdio.h>

//   SUM OF NATURAL NUMBERS

int main()
{
	int n, sum;
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	printf("The numbers are:\n");
	for(int i=1; i<=n; i++)
	{
		printf("%d",i);
		printf("\n");
		sum=sum+i;
	}
	
	printf("The sum of natural numbers are:%d",sum);
	
	return 0;
}
