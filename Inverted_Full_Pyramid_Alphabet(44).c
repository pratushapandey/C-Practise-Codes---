#include<stdio.h>

int main()
{
	int num;
	char c='A';
	
	printf("Enter the number of rows:\n");
	scanf("%d",&num);
	
	for(int i= num; i>=1; --i)
	{
		for(int space=0; space<=num-i; ++space)
		{
			printf(" ");
		}
		for(int j= 1; j<=1; ++j)
		{
			printf(" ");
		}
		for(int k=1; k<=2*i-1; ++k)
		{
			printf("%c",c);
		}
		printf("\n");
		c++;
	}
	return 0;
}
