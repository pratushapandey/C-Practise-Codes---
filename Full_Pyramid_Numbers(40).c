#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	for(int i= 1; i<=num; ++i)
	{
		for(int j= i; j<=num-1; ++j)
		{
			printf(" ");
		}
		for(int k= 1; k<=(2*i-1); ++k)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
