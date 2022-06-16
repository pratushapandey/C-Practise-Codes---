#include<stdio.h>

// CHECK WHETHER THE NUMBER IS POSITIVE, NEGITIVE, EQUAL TO 0

int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("Negitive Number");
	}
	else if(n==0)
	{
		printf("Equal To Zero");
	}
	else
	{
		printf("Positive Number");
	}
	
	return 0;
}
