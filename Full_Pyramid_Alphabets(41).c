#include<stdio.h>

int main()
{
	int num;
	char c='a';
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	for(int i=1 ; i<=num ; ++i)
	{
		for(int j=i ; j<=num-1 ; ++j)
		{
			printf(" ");
		}
		for(int k=1 ; k<=(2*i-1); ++k)
		{
			printf("%c",c);
		}
		printf("\n");
		c++;
	}
	return 0;
}
