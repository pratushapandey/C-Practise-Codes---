#include<stdio.h>

int main()
{
	int num,i,j,k,space;
	
	printf("Enter the number of rows:\n");
	scanf("%d",&num);
	
	for(i=num; i>=1; --i)
	{
		for(space=0; space<=num-i; ++space)
		{
			printf(" ");
		}
		for(j= i; j<=(2*i-1);++j)
		{
			printf("%d",i);
		}
		for(k=0; k<i-1; ++k)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
