#include<stdio.h>
int main()
{
	int num, n=1;
	printf("Enter the number of rows:\n");
	scanf("%d",&num);
	
	for(int i=1; i<=num; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d\t",n);
			n++;
		}
		printf("\n");
	}
	return 0;
}
