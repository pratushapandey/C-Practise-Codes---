#include<stdio.h>

int recursiveFactorial(int n)
{
	if(n >= 1)
	return n * recursiveFactorial(n-1);
	
	else
	return 1;
}
int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	int fact = recursiveFactorial(num);
	printf("Factorial is:%d",fact);
	
	return 0;
}
