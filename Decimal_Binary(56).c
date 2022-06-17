#include<stdio.h>

int convert(long long num)
{
	int i = 1, bin = 0,rem;
	
	while(num != 0)
	{
		rem = num % 2;
		num /= 2;
		bin += rem * i;
		i *= 10;
	}
	return bin;
}

int main()
{
	long long n;
	printf("Enter the decimal number:\n");
	scanf("%lld",&n);
	
	convert(n);
	printf("The binary number is:%lld\n",convert(n));
	
	return 0;
}
