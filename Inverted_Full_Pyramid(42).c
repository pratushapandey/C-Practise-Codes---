#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	for(int i=num; i>=1; --i)
	{
		for(int space=0; space<num-i; ++space)
		{
			printf(" ");
		}
		for(int j=i ; j<=2*i-1 ; ++j)
		{
			printf("*");
		}
		for (int k= 0; k<i-1; ++k)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
