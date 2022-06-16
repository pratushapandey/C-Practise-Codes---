#include<stdio.h>

//You are given an integer N. Print numbers from 1 to N without the help of loops.

int printTillN (int n)
{
	for (int i=1;i<=n;i++)
	{
		printf("%d\t",i);
	}
}

int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	printTillN(n);
	return 0;
}
