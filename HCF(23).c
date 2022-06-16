#include<stdio.h>

//                   CALULATE THE HCF OF THE NUMBERS

int main()
{
	int n1, n2, i, gcd;
	
	printf("Enter the two numbers:\n");
	scanf("%d%d",&n1,&n2);
	
	for(int i=1; i<=n1 && i<=n2; i++)
	{
	    if(n1%i==0 && n2%i==0)
	    gcd=i;
    }
    printf("GCD:\n%d",gcd);
    
    return 0;
}
