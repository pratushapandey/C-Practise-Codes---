#include<stdio.h>

//                       CALCULATE THE TABLE OF A NUMBER

int main()
{
	int n;
	
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	printf("The table of %d is:\n",n);
	
	for(int i=1; i<=10; i++)
	{
		int mul = n*i;
		
		printf("%d * %d =%d\n",n,i,mul);
	}
	return 0;
}
