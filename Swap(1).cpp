#include<stdio.h>

//                                          SWAPPING TWO NUMBERS

int main()
{
	int a, b , temp;
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	
	printf("Enter the value of b:\n");
	scanf("%d",&b);
	
	temp = a;
	a = b;
	b= temp;
	
	printf("After swapping the value \na is %d  \nb is %d",a,b);
	return 0;
}
