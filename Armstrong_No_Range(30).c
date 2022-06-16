#include<stdio.h>
#include<math.h>

//   CALCULATE THE ARMSTRONG NUMBER BETWEEN TWO INTERVAL IN INTERATIVE WAY

int main()
{
	int a, b,i ,orig_num , n = 0, rem, result = 0;
	printf("Enter the values:\n");
	scanf("%d%d",&a,&b);
	printf("\nArmstrong numbers between %d an %d are: ", a, b);
	
	for(i = a + 1; i < b; ++i)
	{
		orig_num = i;
		
		while(orig_num != 0)
		{
			orig_num /= 10;
			++n;
		}
		
		orig_num = i;
		while(orig_num != 0)
		{
			rem = orig_num % 10;
			result += pow(rem , n);
			orig_num /= 10;
		}
		
		if (result == i)
		{
			printf("\n%d",i);
		}
		
		n =0;
		result =0;
	}
	return 0;
}
