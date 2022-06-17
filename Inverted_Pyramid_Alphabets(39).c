#include<stdio.h>

int main ()
{
	int num;
	char c='A';
	
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	for(int i= num; i>=1; --i)
	{
		for(int j=1; j<=i; ++j)
		{
			printf("%c",c);
		}
		printf("\n");
		c++;
	}
	return 0;
}
