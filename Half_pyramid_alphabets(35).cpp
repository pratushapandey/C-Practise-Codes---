#include<stdio.h>

/*      HALF PYRAMID USING ALPHABETS
                                     A
                                     BB
                                     CCC
                                     DDDD
                                     EEEEE                                                */

int main()
{
	int num;
	char c='A';
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("\n");
	
	for(int i=1; i<=num; ++i)
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
