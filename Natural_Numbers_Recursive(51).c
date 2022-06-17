#include<stdio.h>
int recursiveNatural(int n)
{
	if (n != 0)
	return n + recursiveNatural(n-1);
	
	else
	return n;  
}
int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	int sum = recursiveNatural(num);
	
	printf("Sum is:%d",sum);
	
	return 0;
}
