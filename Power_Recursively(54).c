#include<stdio.h>
#include<math.h>
int powerNumber(int n, int p)
{
	if(n != 0)
	return pow(n,p);
	
	else
	return 1;
}
int main()
{
	int num,p,power;
	
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Enter the power:\n");
	scanf("%d",&p);
	power = powerNumber(num,p);
	printf("Result is:%d\n",power);
	
	return 0;
}
