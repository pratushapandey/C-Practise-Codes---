#include<stdio.h>

//                         FLOYD TRIANGLE
/*                                          1
                                            2     3
                                            4     5     6
                                            7     8     9     10
                                            11     12     13     14     15                                          */ 
                                            
void Floyd_Triangle(int n)
{
	int i,j,x=1;
	
	for(i=0; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d\t",x);
			x++;
		} 
		printf("\n");
	}
}
int main()
{
	int n;
	
	printf("Enter the number of rows:\n");
	scanf("%d",&n);
	
	Floyd_Triangle(n);
	
}
