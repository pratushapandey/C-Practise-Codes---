#include<stdio.h>

int main()
{
	int dividend, divisor, quotient, remainder;
	
	// Number to be divided
	printf("Enter the dividend:\n");
	scanf("%d",&dividend);
	
	// Number by which the dividend will be divided
	printf("Enter the divisor:\n");
	scanf("%d",&divisor);
	
	quotient = dividend/divisor;
	printf("Quotient:\n%d\n",quotient);
	
	remainder = dividend % divisor;
	printf("Remainder:\n%d\n",remainder);
	
	return 0;
}
