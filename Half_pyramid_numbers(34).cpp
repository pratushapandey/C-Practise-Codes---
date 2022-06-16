#include<stdio.h>

/*      HALF PYRAMID USING NUMBERS
                                     1
                                     12
                                     123
                                     1234
                                     12345                                                */
                                     
int main()
{
	int num;
	printf("Enter the number of rows:\n");
	scanf("%d",&num);
	
	for(int i=1; i<=num; ++i)
	{
		for(int j=1; j<=i; ++j)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
