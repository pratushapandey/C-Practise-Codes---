#include<stdio.h>

//       CALCULATE THE FACTORS OF THE NUMBER

int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	printf("Factors are:\n");
	for(int i=1; i<=num; i++)
	{
		if(num % i == 0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
