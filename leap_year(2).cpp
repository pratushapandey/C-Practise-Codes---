#include<stdio.h>

//     CHECK IF NUMBER IS LEAP YEAR OR NOT
/*                          if year is divisible by 400 then is_leap_year
                            else if year is divisible by 100 then not_leap_year
                            else if year is divisible by 4 then is_leap_year
                            else not_leap_year                                                                       */

int main()
{
	int a;
	
	printf("Enter the year:\n");
	scanf("%d",&a);
	
	if(a%400==0)
	{
		printf("Leap Year");
	}
	else if(a%100==0)
	{
		printf("Not a Leap Year");
	}
	else if(a%4==0)
	{
		printf("Leap Year");
	}
	else
	{
		printf("Not a Leap Year");
	}
	return 0;
}
