#include<stdio.h>

int main()
{
	int num, i, j, space, k=1;
	printf("Enter the number of rows:\n");
	scanf("%d",&num);
	
	for(i=0; i< num; i++)     // NO OF ROWS
	{
		for(space=1; space<=num-i; ++space)      //NO OF SPACE
		{
			printf(" ");
		}
		for(j=0; j<=i; j++)
		{
			if(j==0||i==0)
			k=1;
			else
			k = k*(i-j+1)/j ;
			printf("%4d",k);
		}
		printf("\n");
	}
	return 0;
}
