#include<stdio.h>

int main()
{
	int n,i,flag=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			flag++;
		}
	}
	if(flag==2)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not Prime Number");
	}
	return 0;
}
