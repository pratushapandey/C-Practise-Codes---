#include<stdio.h>

//                   CALULATE THE LCM OF THE NUMBERS

int main()
{
	int n1, n2,lcm;
	
	printf("Enter the numbers:\n");
	scanf("%d%d",&n1,&n2);
	
	lcm=(n1>n2)?n1:n2;
	
	while(1)
	{
		if(lcm%n1==0 && lcm%n2==0)
		{
			printf("LCM is:%d\n",lcm);
			break;
		}
		lcm++;
	}
	return 0;
}
