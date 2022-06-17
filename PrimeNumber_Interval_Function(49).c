#include<stdio.h>

int primeNumber(int n)
{
  int j, flag = 1;
  for(j = 2; j <= n/2; j++)
  {
  	if(n % j==0)
  	{
	  flag = 0;
	  break;	
	}
  }
  return flag;
}

int main()
{
	int n1,n2,temp,flag;
	int i ;
	printf("Enter the range:\n");
	scanf("%d%d",&n1,&n2);
	
	if(n1 > n2)
	{
	temp = n1;
	n1 = n2;
	n2 = temp;
    }
	
	for(i = n1 + 1; i < n2; i++)
	{
	    flag = primeNumber(i);
		
		if(flag == 1)
		{
		    printf("Range is:\n%d\n",i);
		}
    }
}
