#include<stdio.h>

//              CALCULATE THE FIBONACCI SERIES OF THE NUMBER

int main()
{
	int n, t1=0, t2=1, next_term;
	
	printf("Enter the number of terms:\n");
	scanf("%d",&n);
	
	printf("Fibonacci Series:\n");
	printf("%d\t%d\t",t1,t2);
	
	for(int i=3; i<=n; i++)
	{
		printf("%d\t",next_term);
		t1 = t2;
		t2 = next_term;
		next_term = t1+t2;
	}
	return 0;
}
