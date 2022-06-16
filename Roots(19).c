#include<stdio.h>
#include<math.h>

//              CHECK THE ROOTS OF THE NUMBER 

int main()
{
	int a,b,c,discriminant,root1,root2;
	
	printf("Enter the values of a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	discriminant = b*b-4*a*c;
	
	if(discriminant>0)
	{
		root1 = (-b + sqrt (discriminant))/(2*a);
		root2 = (-b - sqrt (discriminant))/(2*a);
		
		printf("Root1: %d , Root2: %d",root1,root2);
	}
	
	else if(discriminant==0)
	{
		root1 = root2 = -b/(2*a);
		
		printf("Root1 = Root2 = %d",root1);
	}
	
	else
	{
		printf("Roots are imaginary");
	}
	
	return 0;
}
