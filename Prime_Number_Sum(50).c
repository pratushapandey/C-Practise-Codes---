#include<stdio.h>

int checkPrime(int n)
{
	int i,flag = 1;
	if(i==0 || i == 1)
	flag = 0;
	
	for(i = 2; i <= n/2; i++)
	{
		if(n%i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
int main()
{
	int n,j;
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	for(j = 2; j <= n/2; j++)
	{
		if(checkPrime(j)==1)
		{
			if(checkPrime(n-j)==1)
			{
				printf("%d = %d + %d\n",n, j, n-j);
			}
		}
	}
}
