#include<stdio.h>

//                              CELSIUS TO FARENHEIT 

float celsiusTOfarenheit (int c)
{
	float f = (((float)c * 9.0/5.0)+32.0);
	printf("%0.2f\n",f);
}

int main()
{
	int c;
	
	printf("Enter the temperature in Celsius:\n");
	scanf("%d",&c);
	
	celsiusTOfarenheit(c);
}
